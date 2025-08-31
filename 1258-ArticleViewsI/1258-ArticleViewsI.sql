-- Last updated: 01/09/2025, 01:02:28
# Write your MySQL query statement below
select distinct author_id as id from Views
where author_id = viewer_id 
order by id;