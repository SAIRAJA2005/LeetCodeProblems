-- Last updated: 01/09/2025, 01:05:19
# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e,  Employee m
WHERE e.managerId = m.Id
AND e.salary > m.salary
