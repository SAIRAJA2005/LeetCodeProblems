-- Last updated: 01/09/2025, 01:03:38
# Write your MySQL query statement below
SELECT MAX(num) AS num FROM (
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) AS unique_numbers;