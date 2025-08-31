-- Last updated: 01/09/2025, 01:03:41
# Write your MySQL query statement below
SELECT class from Courses GROUP BY class
HAVING COUNT(Student) >= 5