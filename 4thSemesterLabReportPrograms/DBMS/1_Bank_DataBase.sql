
show databases;
drop database 1Bank_DataBase;

/*DataBase Schema*/
create database Bank_DataBase_1;
use Bank_DataBase_1;
CREATE TABLE Branch (
  branch_name VARCHAR(255) PRIMARY KEY,
  branch_city VARCHAR(255),
  assets DECIMAL(10,2)
);
CREATE TABLE Customer (
  customer_name VARCHAR(255) PRIMARY KEY,
  customer_street VARCHAR(255),
  customer_city VARCHAR(255)
);
CREATE TABLE Loan (
  branch_number INTEGER,
  branch_name VARCHAR(255),
  amount DECIMAL(10,2),
  PRIMARY KEY (branch_number, branch_name),
  FOREIGN KEY (branch_name) REFERENCES Branch(branch_name)
);
CREATE TABLE Borrower (
    customer_name VARCHAR(50),
    loan_number INT,
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (customer_name) REFERENCES Customer(customer_name)
);
CREATE TABLE Account (
  account_number INTEGER PRIMARY KEY,
  branch_name VARCHAR(255),
  balance DECIMAL(10,2),
  FOREIGN KEY (branch_name) REFERENCES Branch(branch_name)
);
CREATE TABLE Depositor (
  customer_name VARCHAR(255),
  account_number INTEGER,
  PRIMARY KEY (customer_name, account_number),
  FOREIGN KEY (customer_name) REFERENCES Customer(customer_name),
  FOREIGN KEY (account_number) REFERENCES Account(account_number)
);

/*Sample Data*/
INSERT INTO Branch (branch_name, branch_city, assets)
VALUES ('Main Street', 'New York', 1000000.00),
       ('Perryridge', 'Chicago', 750000.00);

INSERT INTO Customer (customer_name, customer_street, customer_city)
VALUES ('John Doe', '123 Main St', 'New York'),
       ('Jane Smith', '456 Elm St', 'Chicago');

INSERT INTO Loan (branch_number, branch_name, amount)
VALUES (1, 'Main Street', 30000.00),
       (2, 'Perryridge', 15000.00),
       (1, 'Main Street', 7000.00);  -- John Doe has two loans

INSERT INTO Borrower (customer_name, loan_number) VALUES ('John Doe', 1);
-- insert into borrower (customer_name, loan_number) values ('jenny',2);

INSERT INTO Account (account_number, branch_name, balance)
VALUES (1234, 'Main Street', 5000.00),
       (5678, 'Perryridge', 2000.00);

INSERT INTO Depositor (customer_name, account_number)
VALUES ('John Doe', 1234),
       ('Jane Smith', 5678);

/*SQL Expression for Queries*/
show tables;

-- (i)
SELECT DISTINCT C.customer_name
FROM Customer C
JOIN Depositor D ON C.customer_name = D.customer_name
LEFT JOIN Borrower B ON C.customer_name = B.customer_name
WHERE B.loan_number IS NULL;
-- to disable safe mode in database
set sql_safe_updates = 0;
set sql_safe_updates = 1;
-- (ii)
DELETE FROM Loan
WHERE amount BETWEEN 10000 AND 25000;
-- (iii) this is not correct I can't understand the question it's not making sence 
SELECT DISTINCT B.customer_name
FROM Borrower B
JOIN Loan L ON B.loan_number = L.branch_number
WHERE L.branch_name = 'Perryridge';
-- (iv)
DELETE FROM Loan
WHERE amount BETWEEN 0 AND 500;




