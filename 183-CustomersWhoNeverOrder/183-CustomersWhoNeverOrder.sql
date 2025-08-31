-- Last updated: 01/09/2025, 01:05:16
# Write your MySQL query statement below
SELECT name AS Customers
FROM Customers
LEFT JOIN Orders ON Customers.id = Orders.customerId
WHERE Orders.customerId IS NULL;
