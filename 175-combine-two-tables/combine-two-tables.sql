# Write your MySQL query statement below
select Person.firstName, Person.lastName , Address.city , Address.state 
FROM Person LEFT JOIN Address ON Address.personId = Person.personId ; 
