show databases;
use kharghar;
select *from orders;
select onum,snum ,cnum,amt*0.12 from orders;

select *from customers
order by city desc , Rating desc;

select city ,max(rating)
from customers
group by city;

select concat('For the city:',city ,'the highest rating is:',max(rating)) as formatted
from customers
GROUP BY city;

select *from customers;

select rating, cname, cnum from customers
order by Rating desc;

select *from orders;

select odate,count(onum) as "total" from orders
group by odate 
order by total desc;



