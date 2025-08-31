-- Last updated: 01/09/2025, 00:59:37
# Write your MySQL query statement below
select teacher_id, count(distinct(subject_id)) as cnt
from Teacher
group by teacher_id