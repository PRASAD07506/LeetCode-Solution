# Write your MySQL query statement below
select e.name from Employee e
inner join Employee f on e.id = f.managerId
group by f.managerId
having count(*) >=5;

