# Write your MySQL query statement below
select actor_id , director_id from ActorDirector Group BY actor_id , director_id Having count(*) >= 3