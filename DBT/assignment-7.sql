show databases;
use kharghar;
show tables;

select*from orders;
select Odate, sum(Onum) from orders
where Odate='1990-10-03'
group by odate;

select*from customers;
select count(distinct city) as "Differentcity"  from customers;

select Cname, min(cnum) as "smallest order" from customers
group by cname;

select cname from customers
where cname like 'G%';

select*from customers
order by rating desc;

select sname,count(distinct Snum) as "registerPeople" From salespeople
group by sname;

