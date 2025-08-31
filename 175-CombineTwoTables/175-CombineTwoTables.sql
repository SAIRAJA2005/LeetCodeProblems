-- Last updated: 01/09/2025, 01:05:24
# Write your MySQL query statement below
select Person.firstName, Person.lastName , Address.city , Address.state 
FROM Person LEFT JOIN Address ON Address.personId = Person.personId ; 
