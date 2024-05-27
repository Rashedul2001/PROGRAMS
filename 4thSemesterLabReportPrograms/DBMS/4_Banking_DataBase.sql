create database Banking_Database_4;
use banking_database_4;
/*
Consider the banking database consisting of the banking database consisting of the following
tables, where the primary keys are (pk).

Branch (branch_name(pk), branch_city, assets)
Customer (customer_name(pk), customer_street, customer_city)
Loan_account (loan_number(pk), branch_name, amount)
Borrower (customer_name(pk), loan_number)
Saving_account (account_number(pk), branch_name, balance)
Depositor (customer_name(pk), account_number(pk))

"give me SQL expression for building this schema and some sample data and answer following questions"

Write down the SQL expressions for the following queries:

i. Find all customers of the bank who have both loan and a saving account.
ii. Find all average account balance at each branch.
iii. Deduct 3% service charge from saving account balance that have both loan and a saving account
otherwise deduct 5% service charge from saving account balance.
*/

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

CREATE TABLE Loan_account (
  loan_number INT PRIMARY KEY,
  branch_name VARCHAR(255) NOT NULL,
  amount DECIMAL(10,2) NOT NULL,
  FOREIGN KEY (branch_name) REFERENCES Branch(branch_name)
);

CREATE TABLE Borrower (
  customer_name VARCHAR(255) PRIMARY KEY,
  loan_number INT NOT NULL,
  FOREIGN KEY (customer_name) REFERENCES Customer(customer_name),
  FOREIGN KEY (loan_number) REFERENCES Loan_account(loan_number)
);

CREATE TABLE Saving_account (
  account_number INT PRIMARY KEY,
  branch_name VARCHAR(255) NOT NULL,
  balance DECIMAL(10,2) NOT NULL,
  FOREIGN KEY (branch_name) REFERENCES Branch(branch_name)
);

CREATE TABLE Depositor (
  customer_name VARCHAR(255) PRIMARY KEY,
  account_number INT NOT NULL,
  FOREIGN KEY (customer_name) REFERENCES Customer(customer_name),
  FOREIGN KEY (account_number) REFERENCES Saving_account(account_number)
);
/*sample dat*/
INSERT INTO Branch (branch_name, branch_city, assets)
VALUES ('Main Branch', 'Dhaka', 1000000.00),
       ('North Branch', 'Chittagong', 800000.00);

INSERT INTO Customer (customer_name, customer_street, customer_city)
VALUES ('John Doe', '1 Main St', 'Dhaka'),
       ('Jane Smith', '2 Elm St', 'Chittagong'),
       ('Ali Ahmed', '3 Waterway Rd', 'Barisal'),
       ('Maria Garcia', '4 Park Ave', 'Dhaka');

INSERT INTO Loan_account (loan_number, branch_name, amount)
VALUES (1001, 'Main Branch', 50000.00),
       (1002, 'North Branch', 40000.00),
       (1003, 'Main Branch', 65000.00);

INSERT INTO Borrower (customer_name, loan_number)
VALUES ('John Doe', 1001),
       ('Jane Smith', 1002),
       ('Ali Ahmed', 1003);

INSERT INTO Saving_account (account_number, branch_name, balance)
VALUES (2001, 'Main Branch', 10000.00),
       (2002, 'North Branch', 8000.00),
       (2003, 'Main Branch', 15000.00),
       (2004, 'North Branch', 12000.00);

INSERT INTO Depositor (customer_name, account_number)
VALUES ('John Doe', 2001),
       ('Jane Smith', 2002),
       ('Ali Ahmed', 2003),
       ('Maria Garcia', 2004);

/*Query*/

-- (i)
SELECT DISTINCT c.customer_name
FROM Customer c
JOIN Borrower b ON c.customer_name = b.customer_name
JOIN Depositor d ON c.customer_name = d.customer_name;

-- (ii)
SELECT sa.branch_name, AVG(sa.balance) AS average_balance
FROM Saving_account sa
GROUP BY sa.branch_name;

-- (iii)
-- Deduct 3% service charge for customers who have both a loan and a saving account
UPDATE Saving_account sa
SET sa.balance = sa.balance * 0.97
WHERE sa.account_number IN (
    SELECT d.account_number
    FROM Depositor d
    JOIN Borrower b ON d.customer_name = b.customer_name
);

-- Deduct 5% service charge for customers who do not have both a loan and a saving account
UPDATE Saving_account sa
SET sa.balance = sa.balance * 0.95
WHERE sa.account_number NOT IN (
    SELECT d.account_number
    FROM Depositor d
    JOIN Borrower b ON d.customer_name = b.customer_name
);



