# Write your MySQL query statement below
select Salary as SecondHighestSalary from Employee
where Id=(select count(Id) from Employee)-1;
