-- Last updated: 01/09/2025, 01:03:36
# Write your MySQL query statement below
update salary 
set sex = case 
    when sex = 'f' then 'm' 
    else 'f' 
    end;