# Write your MySQL query statement below
select e.unique_id, e1.name 
from Employees e1
left join  EmployeeUNI e on e1.id = e.id;

