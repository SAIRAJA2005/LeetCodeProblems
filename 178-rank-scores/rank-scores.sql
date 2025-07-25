# Write your MySQL query statement below

# dense_rank is used for the setting the same rank for the same valued ranks
# over()  clause --> Apply the function to this specific subset or order of data.

select score, dense_rank() 
    over(order by score desc) as 'rank'
    from scores;