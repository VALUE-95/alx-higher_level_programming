```markdown
# SQL Project

## Introduction
This project is designed to provide an introduction to SQL and MySQL, covering essential concepts such as databases, SQL syntax, queries, subqueries, functions, and basic database operations.

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All files will be executed on Ubuntu 20.04 LTS using MySQL 8.0 (version 8.0.25)
- All files should end with a new line
- All SQL queries should have a comment just before
- All files should start with a comment describing the task
- All SQL keywords should be in uppercase (SELECT, WHERE...)
- A README.md file, at the root of the folder of the project, is mandatory
- The length of your files will be tested using wc

### More Info
- Comments for your SQL files should follow a specified format
- MySQL 8.0 installation commands for Ubuntu 20.04 LTS are provided
- Instructions for connecting to the MySQL server and usage are given
- Credentials for accessing MySQL in the container: root/root

## Learning Objectives
By the end of this project, you should be able to explain:
- What a database is
- What a relational database is
- The meaning of SQL
- What MySQL is
- How to create a database in MySQL
- The meanings of DDL and DML
- How to CREATE or ALTER a table
- How to SELECT data from a table
- How to INSERT, UPDATE, or DELETE data
- What subqueries are
- How to use MySQL functions

## Files Description
- `0-list_databases.sql`: SQL script to list all databases.
- `1-create_database_if_missing.sql`: SQL script to create a database if it doesn't exist.
- `2-insert_values.sql`: SQL script to insert values into a table.
- `3-count_rows.sql`: SQL script to count the number of rows in a table.
- `4-full_table.sql`: SQL script to display all columns for all rows in a table.
- `5-change_name.sql`: SQL script to change the name of a column.
- `6-delete_id_10.sql`: SQL script to delete records with ID 10.
- `7-best_batch.sql`: SQL script to select the top 3 students from the best batch.
- `8-drop_students.sql`: SQL script to drop the students table.

## How to Run
1. Ensure MySQL 8.0 is installed on your Ubuntu 20.04 LTS system.
2. Connect to the MySQL server using credentials: `mysql -uroot -p`.
3. Execute the SQL files using the provided scripts.

## Author
Guillaume

## License
This project is licensed under the MIT License - see the LICENSE file for details.
```
