-- Last updated: 01/09/2025, 01:02:37
# Write your MySQL query statement below
SELECT p.product_name, s.year, s.price  
FROM Sales s  
JOIN Product p  
ON s.product_id = p.product_id;