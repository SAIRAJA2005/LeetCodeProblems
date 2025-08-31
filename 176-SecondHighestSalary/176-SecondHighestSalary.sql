-- Last updated: 01/09/2025, 01:05:23
# Write your MySQL query statement below
SELECT (
    SELECT DISTINCT salary From Employee 
    ORDER BY salary 
    DESC LIMIT 1 OFFSET 1 ) #offset -> skips the row.
As SecondHighestSalary