create database Book_Employee;
use  Book_employee;
/*

5.
Consider the following relational schema
Employee (empno(pk), name, office, age)
Books (isbn(pk), title, author, publisher)
Loan (empno(pk),isbn(pk), date)

"give me SQL expression for building this schema and some sample data and answer following questions"

Write down the SQL expressions for the following queries:

i. print the names of all employees who have borrowed any book published by "XYZ"
ii. Print the names of all employees who have borrowed all book published by "XYZ"
iii. For each publisher, print the names of employees who have borrowed more than five books of that
publisher.
*/

CREATE TABLE Employee (
  empno INT PRIMARY KEY,
  name VARCHAR(255) NOT NULL,
  office VARCHAR(255),
  age INT
);

CREATE TABLE Books (
  isbn VARCHAR(255) PRIMARY KEY,
  title VARCHAR(255) NOT NULL,
  author VARCHAR(255) NOT NULL,
  publisher VARCHAR(255) NOT NULL
);

CREATE TABLE Loan (
  empno INT ,
  isbn VARCHAR(255) ,
  primary key(empno,isbn),
  date DATE NOT NULL,
  FOREIGN KEY (empno) REFERENCES Employee(empno),
  FOREIGN KEY (isbn) REFERENCES Books(isbn)
);


-- Insert data into Employee table
INSERT INTO Employee (empno, name, office, age) VALUES
(1, 'John Doe', 'Office A', 30),
(2, 'Jane Smith', 'Office B', 25),
(3, 'Alice Johnson', 'Office C', 35),
(4, 'Bob Brown', 'Office D', 40);

-- Insert data into Books table
INSERT INTO Books (isbn, title, author, publisher) VALUES
('978-1234567890', 'Book One', 'Author A', 'XYZ'),
('978-1234567891', 'Book Two', 'Author B', 'ABC'),
('978-1234567892', 'Book Three', 'Author C', 'XYZ'),
('978-1234567893', 'Book Four', 'Author D', 'XYZ'),
('978-1234567894', 'Book Five', 'Author E', 'LMN'),
('978-1234567895', 'Book Six', 'Author F', 'XYZ');

-- Insert data into Loan table
INSERT INTO Loan (empno, isbn, date) VALUES
(1, '978-1234567890', '2024-01-01'),
(2, '978-1234567891', '2024-01-02'),
(3, '978-1234567892', '2024-01-03'),
(1, '978-1234567893', '2024-01-04'),
(4, '978-1234567894', '2024-01-05'),
(1, '978-1234567895', '2024-01-06'),
(2, '978-1234567890', '2024-01-07'),
(3, '978-1234567893', '2024-01-08'),
(3, '978-1234567895', '2024-01-09'),
(4, '978-1234567891', '2024-01-10'),
(4, '978-1234567892', '2024-01-11');


-- (i)
SELECT DISTINCT e.name
FROM Employee e
JOIN Loan l ON e.empno = l.empno
JOIN Books b ON l.isbn = b.isbn
WHERE b.publisher = 'XYZ';

-- (ii)
SELECT e.name
FROM Employee e
JOIN Loan l ON e.empno = l.empno
JOIN Books b ON l.isbn = b.isbn
WHERE b.publisher = 'XYZ'
GROUP BY e.empno, e.name
HAVING COUNT(DISTINCT b.isbn) = (SELECT COUNT(*) FROM Books WHERE publisher = 'XYZ');

-- (iii)
SELECT b.publisher, e.name
FROM Employee e
JOIN Loan l ON e.empno = l.empno
JOIN Books b ON l.isbn = b.isbn
GROUP BY b.publisher, e.name
HAVING COUNT(l.isbn) > 5;

