-- Last updated: 01/09/2025, 01:02:39
# Write your MySQL query statement below
select actor_id , director_id from ActorDirector Group BY actor_id , director_id Having count(*) >= 3