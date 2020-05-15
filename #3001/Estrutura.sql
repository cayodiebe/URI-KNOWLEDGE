CREATE TABLE products (
id SERIAL NOT NULL,
name VARCHAR(50),
type CHAR(1),
price NUMERIC);

INSERT INTO products (name, type, price) 
VALUES
('Monitor', 'B', 0),
('Headset', 'A', 0),
('PC Case', 'A', 0),
('Computer Desk', 'C', 0),
('Gaming Chair', 'C', 0),
('Mouse', 'A', 0);