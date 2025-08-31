-- Last updated: 01/09/2025, 01:03:39
select x, y, z, 
case when x + y > z and x + z > y and y + z > x then 'Yes'  
    else 'No'  
end as triangle
from Triangle