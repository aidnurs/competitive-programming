# Write your MySQL query statement below
select b.Id from Weather a,Weather b where DATEDIFF(b.RecordDate,a.RecordDate)=1 and b.Temperature>a.Temperature;
