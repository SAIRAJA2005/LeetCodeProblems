# Write your MySQL query statement below
SELECT email AS Email 
from Person 
GROUP BY email 
having COUNT(email) > 1;