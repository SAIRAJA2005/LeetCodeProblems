-- Last updated: 01/09/2025, 01:02:34
# Write your MySQL query statement below

SELECT player_id, MIN(event_date) AS first_login
FROM Activity
GROUP BY player_id;