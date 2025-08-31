-- Last updated: 01/09/2025, 01:03:44
# Write your MySQL query statement below
SELECT customer_number FROM orders GROUP BY customer_number
ORDER BY COUNT(*) DESC LIMIT 1;