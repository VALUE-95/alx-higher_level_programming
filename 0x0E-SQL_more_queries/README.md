PROJECT: 0x0E.SQL - MORE QUERIES

To achieve the learning objectives outlined in the project, let's address each requirement with explanations and example SQL queries.

### Task: General SQL Concepts

#### How to create a new MySQL user
```sql
-- Create a new MySQL user
CREATE USER 'newuser'@'localhost' IDENTIFIED BY 'password';
```

#### How to manage privileges for a user to a database or table
```sql
-- Grant all privileges to a user on a specific database
GRANT ALL PRIVILEGES ON database_name.* TO 'username'@'localhost';

-- Grant specific privileges on a table to a user
GRANT SELECT, INSERT, UPDATE ON database_name.table_name TO 'username'@'localhost';
```

#### What’s a PRIMARY KEY
A PRIMARY KEY is a column or a set of columns that uniquely identifies each row in a table. It ensures that each row in a table is uniquely identified and cannot contain null values.
```sql
-- Example of defining a PRIMARY KEY
CREATE TABLE example_table (
    id INT PRIMARY KEY,
    name VARCHAR(50)
);
```

#### What’s a FOREIGN KEY
A FOREIGN KEY is a column or a combination of columns that establishes a link between data in two tables. It creates a relationship between the data in two tables by referencing the primary key of another table.
```sql
-- Example of defining a FOREIGN KEY
CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    customer_id INT,
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
);
```

#### How to use NOT NULL and UNIQUE constraints
```sql
-- Example of using NOT NULL and UNIQUE constraints
CREATE TABLE users (
    user_id INT PRIMARY KEY,
    username VARCHAR(50) NOT NULL UNIQUE,
    email VARCHAR(100) NOT NULL
);
```

#### How to retrieve data from multiple tables in one request
```sql
-- Example of retrieving data from multiple tables using JOIN
SELECT orders.order_id, customers.customer_name
FROM orders
JOIN customers ON orders.customer_id = customers.customer_id;
```

#### What are subqueries
A subquery is a query nested inside another query. It can be used to return data that will be used in the main query's condition, filtering, or projection.
```sql
-- Example of using a subquery
SELECT column1
FROM table1
WHERE column2 IN (SELECT column2 FROM table2 WHERE condition);
```

#### What are JOIN and UNION
JOIN is used to combine rows from two or more tables based on a related column between them. UNION is used to combine the result sets of two or more SELECT statements into a single result set.
```sql
-- Example of using JOIN
SELECT orders.order_id, customers.customer_name
FROM orders
JOIN customers ON orders.customer_id = customers.customer_id;

-- Example of using UNION
SELECT column1 FROM table1
UNION
SELECT column1 FROM table2;
```

### Conclusion
Understanding these fundamental concepts of SQL will provide a solid foundation for working with databases and writing efficient queries. Practice and experimentation with these concepts are crucial for mastery.
