-- Last updated: 01/09/2025, 01:03:37
# Write your MySQL query statement below

SELECT * FROM Cinema WHERE description != 'boring' AND MOD(id, 2) = 1 ORDER BY rating DESC;
