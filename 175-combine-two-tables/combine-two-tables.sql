# Write your MySQL query statement below
select lastName,firstName,City,State
from Person left join Address
on Person.PersonID=Address.PersonId;
