/*
2.
Consider the employee database consisting of the following relations, where the primary keys are (pk).
Schema:
Employee (employee_id(pk), employee_name, street, city)
Works (employee_id(pk), company_name, salary)
Company (company_name, city)
Manager (employee_id(pk), manager_name)

"give me SQL expression for building this schema and some sample data and answer following questions"

Write down the SQL expressions for the following queries:

i. Find the company that has the most employees.
ii. Find the average salaries at each company.
iii. Find all employees who live in Barisal city, but their company is not in Barisal.
iv. Find the names of all employees who work for First Bank Corporation.
*/


create database employee_DataBase_2;
use employee_database_2;
CREATE TABLE Employee (
  employee_id INT PRIMARY KEY,
  employee_name VARCHAR(255) NOT NULL,
  street VARCHAR(255),
  city VARCHAR(255)
);
CREATE TABLE Works (
  employee_id INT PRIMARY KEY,
  company_name VARCHAR(255) NOT NULL,
  salary DECIMAL(10,2) NOT NULL,
  FOREIGN KEY (employee_id) REFERENCES Employee(employee_id)
);
CREATE TABLE Company (
  company_name VARCHAR(255) PRIMARY KEY,
  city VARCHAR(255)
);
CREATE TABLE Manager (
  employee_id INT PRIMARY KEY,
  manager_name VARCHAR(255),
  FOREIGN KEY (employee_id) REFERENCES Employee(employee_id)
);
/*Data Entry */
INSERT INTO Employee (employee_id, employee_name, street, city) VALUES
(1, 'John Doe', '123 Elm St', 'Barisal'),
(2, 'Jane Smith', '456 Oak St', 'Dhaka'),
(3, 'Alice Johnson', '789 Pine St', 'Chittagong'),
(4, 'Bob Brown', '101 Maple St', 'Barisal'),
(5, 'Charlie Davis', '202 Birch St', 'Sylhet');

INSERT INTO Works (employee_id, company_name, salary) VALUES
(1, 'Tech Solutions', 60000),
(2, 'First Bank Corporation', 55000),
(3, 'Tech Solutions', 62000),
(4, 'First Bank Corporation', 48000),
(5, 'HealthCorp', 51000);
INSERT INTO Company (company_name, city) VALUES
('Tech Solutions', 'Dhaka'),
('First Bank Corporation', 'Barisal'),
('HealthCorp', 'Chittagong');
INSERT INTO Manager (employee_id, manager_name) VALUES
(1, 'Michael Scott'),
(2, 'Dwight Schrute'),
(3, 'Jim Halpert'),
(4, 'Pam Beesly'),
(5, 'Stanley Hudson');

/* SQL Query Answers */
-- (i)
SELECT company_name
FROM Works
GROUP BY company_name
ORDER BY COUNT(employee_id) DESC
LIMIT 1;

-- (ii)
SELECT company_name, AVG(salary) AS average_salary
FROM Works
GROUP BY company_name;

-- (iii)
SELECT e.employee_name
FROM Employee e
JOIN Works w ON e.employee_id = w.employee_id
JOIN Company c ON w.company_name = c.company_name
WHERE e.city = 'Barisal' AND c.city <> 'Barisal';

-- (iv)
SELECT e.employee_name
FROM Employee e
JOIN Works w ON e.employee_id = w.employee_id
WHERE w.company_name = 'First Bank Corporation';


