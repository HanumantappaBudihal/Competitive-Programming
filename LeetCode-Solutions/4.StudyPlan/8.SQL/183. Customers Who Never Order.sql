/* Write your T-SQL query statement below */
select distinct c.name as Customers from Customers c
where c.id not in (select distinct customerId   from orders)