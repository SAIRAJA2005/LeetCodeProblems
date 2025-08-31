-- Last updated: 01/09/2025, 01:01:39
# Write your MySQL query statement below
select sell_date , COUNT(DISTINCT product) as num_sold , 
group_concat(DISTINCT product) as products from Activities
group by sell_date order by sell_date;
