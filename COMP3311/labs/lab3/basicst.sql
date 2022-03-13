select * from STUDENT;

select FIRSTNAME from student;

select DEPARTMENTID from student;

select distinct DEPARTMENTID from student;

select LASTNAME as FamilyName from student;

select FIRSTNAME || '  ' || LASTNAME as Fullname from student;

select FIRSTNAME || '  ' || LASTNAME as Fullname from student where (DEPARTMENTID = 'COMP' or DEPARTMENTID = 'MATH');

select * from student where FIRSTNAME like '%u%';

select * from student where FIRSTNAME like '_u%';
