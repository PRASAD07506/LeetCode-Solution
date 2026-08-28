# Write your MySQL query statement below
select name as Customers from Customers 
left join Orders on customers.ID = orders.customerID
where orders.customerID is NULL;
