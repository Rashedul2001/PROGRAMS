create database Bank_DataBase_1;
use Bank_DataBase_1;

/*
1.
Consider the following bank database relations, here the primary keys are (pk).
Branch (branch_name(pk), branch_city, assets)
Customer (customer_name(pk), customer_street, customer_city)
Loan (loan_number(pk), branch_name(pk). amount)
Borrower (customer_name(pk),loan_number)
Account (account_number(pk),branch_name, balance)
Depositor (customer_name(pk), account number)

"give me SQL expression for building this schema and some sample data and answer following questions"

Write down the SQL expressions for the following queries.
i. Find all customers who have account but no loan in bank.
ii. Delete all loan amount between 10000/- and 25000/-
iii. Find the names of all customers who have a loan at Perryridge branch.
iv. Delete all loans with amount in the range 0 to 500.

*/

CREATE TABLE Branch (
    branch_name VARCHAR(255) PRIMARY KEY,
    branch_city VARCHAR(255),
    assets DECIMAL(15, 2)
);

CREATE TABLE Customer (
    customer_name VARCHAR(255) PRIMARY KEY,
    customer_street VARCHAR(255),
    customer_city VARCHAR(255)
);

CREATE TABLE Loan (
    loan_number INT PRIMARY KEY,
    branch_name VARCHAR(255),
    amount DECIMAL(15, 2),
    FOREIGN KEY (branch_name) REFERENCES Branch(branch_name)
);

CREATE TABLE Borrower (
    customer_name VARCHAR(255),
    loan_number INT,
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (customer_name) REFERENCES Customer(customer_name),
    FOREIGN KEY (loan_number) REFERENCES Loan(loan_number)
);

CREATE TABLE Account (
    account_number INT PRIMARY KEY,
    branch_name VARCHAR(255),
    balance DECIMAL(15, 2),
    FOREIGN KEY (branch_name) REFERENCES Branch(branch_name)
);

CREATE TABLE Depositor (
    customer_name VARCHAR(255),
    account_number INT,
    PRIMARY KEY (customer_name, account_number),
    FOREIGN KEY (customer_name) REFERENCES Customer(customer_name),
    FOREIGN KEY (account_number) REFERENCES Account(account_number)
);

-- Insert data into Branch table
INSERT INTO Branch (branch_name, branch_city, assets) VALUES
('Downtown', 'New York', 1000000),
('Uptown', 'New York', 500000),
('Midtown', 'New York', 750000),
('Perryridge', 'San Francisco', 600000);

-- Insert data into Customer table
INSERT INTO Customer (customer_name, customer_street, customer_city) VALUES
('John Doe', '123 Elm St', 'New York'),
('Jane Smith', '456 Oak St', 'New York'),
('Alice Johnson', '789 Pine St', 'New York'),
('Bob Brown', '101 Maple St', 'San Francisco');

-- Insert data into Loan table
INSERT INTO Loan (loan_number, branch_name, amount) VALUES
(1001, 'Downtown', 5000),
(1002, 'Uptown', 10000),
(1003, 'Midtown', 15000),
(1004, 'Perryridge', 20000),
(1005, 'Perryridge', 30000);

-- Insert data into Borrower table
INSERT INTO Borrower (customer_name, loan_number) VALUES
('John Doe', 1001),
('Jane Smith', 1002),
('Alice Johnson', 1003),
('Bob Brown', 1004);

-- Insert data into Account table
INSERT INTO Account (account_number, branch_name, balance) VALUES
(2001, 'Downtown', 3000),
(2002, 'Uptown', 4000),
(2003, 'Midtown', 5000),
(2004, 'Perryridge', 6000);

-- Insert data into Depositor table
INSERT INTO Depositor (customer_name, account_number) VALUES
('John Doe', 2001),
('Jane Smith', 2002),
('Alice Johnson', 2003),
('Bob Brown', 2004);

-- (i)
SELECT DISTINCT c.customer_name
FROM Customer c
JOIN Depositor d ON c.customer_name = d.customer_name
LEFT JOIN Borrower b ON c.customer_name = b.customer_name
WHERE b.loan_number IS NULL;

-- (ii)
DELETE FROM Loan
WHERE amount BETWEEN 10000 AND 25000;

-- (iii)
SELECT DISTINCT c.customer_name
FROM Customer c
JOIN Borrower b ON c.customer_name = b.customer_name
JOIN Loan l ON b.loan_number = l.loan_number
WHERE l.branch_name = 'Perryridge';

-- (iv)
DELETE FROM Loan
WHERE amount BETWEEN 0 AND 500;

