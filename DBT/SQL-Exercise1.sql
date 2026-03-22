show databases;
use Kharghar;
show tables;
select*from semp;
insert into semp(EMPNO,EMPNAME,BASIC,DEPTNO,DEPTHEAD)values('0002', 'HIREN', 8000, '20',null);
insert into semp(EMPNO,EMPNAME,BASIC,DEPTNO,DEPTHEAD)values('0003', 'ALI', 4000, '10', '0001');
insert into semp(EMPNO,EMPNAME,BASIC,DEPTNO,DEPTHEAD)values('0004', 'GEORGE', 6000, null, '0002');

create table SUPPLIER(`S#` char(2),Sname char(2), Status char(4),City char(15));
insert into SUPPLIER(`S#`,Sname,Status,City)values('S1',null,null,null),
                                                   ('S2',null,null,null),
													('S3',null,null,null);
select*from SUPPLIER;

create table PARTS(`P#`char(2),Pname char(3),Color char(2),Weight char(2),City char(15));
insert into PARTS(`P#`,Pname,Color,Weight,City)values('P1',null,null,null,null),
													  ('P2',null,null,null,null),
													  ('P3',null,null,null,null);
 
 create table PROJECTS(`J#`char(2),Jname char(2),City char(2));
 insert into PROJECTS(`J#`,Jname,City)values('J1',null,null),
											('J2',null,null),
                                             ('J3',null,null);
 select*from SUPPLIER;
 select `S#`,Sname from SUPPLIER;
 
 update PARTS
 set City = 'London'
 where `P#`='P1';
 
 ALTER TABLE PARTS MODIFY COLUMN City VARCHAR(50);
 
 select `P#`,Color from Parts
 where City = 'London';
 
 update supplier
 set city ='London'
 where city is null; 
 
 select *from supplier;
 
 update supplier
 set city ='Paris'
 where city ='London';
 
  select *from supplier;

update PROJECTS
set City = 'athens'
where City is null;

alter table PROJECTS modify column city varchar(50);
select*from PROJECTS;

alter table PARTS modify column Weight int;
update parts
set weight = 11
where `P#`='P1';

update parts
set weight = 14
where `P#`='P2';

update parts
set weight = 17
where `P#`='P3';

select *from parts;
select Pname,weight from parts
where weight between 12 and 14;

alter table supplier modify column Status int ; 

update supplier
set Status = 89
where `S#`='S1';

update supplier
set Status = 45
where `S#`='S2';

update supplier
set Status = 09
where `S#`='S3';
select*from supplier;

select*from supplier
where Status >=20;

update supplier
set city ='Paris'
where  status =89;

select * from supplier;

select city from supplier;
select*from parts;

alter table parts modify column weight char(200);

update parts
set weight ='23 GRAMS'
WHERE `P#`='P1';

update parts
set weight ='28 KILOGRAMS'
WHERE `P#`='P2';

update parts
set weight ='22 MILLIGRAMS'
WHERE `P#`='P3';
select*from parts;
