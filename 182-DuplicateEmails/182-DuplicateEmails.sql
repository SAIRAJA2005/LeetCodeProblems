-- Last updated: 01/09/2025, 01:05:18
# Write your MySQL query statement below
SELECT email AS Email 
from Person 
GROUP BY email 
having COUNT(email) > 1;