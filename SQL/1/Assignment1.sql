SELECT * from EMP;

SELECT ENAME from EMP WHERE JOB='Manager';

SELECT * from EMP WHERE EMPNO=7369;

SELECT ENAME from EMP WHERE HIREDATE='1-MAY-1981';

SELECT ENAME from EMP WHERE SAL>1500;

SELECT ENAME from EMP WHERE COMM is NULL;

SELECT ENAME from EMP WHERE ENAME LIKE 'A%';

ALTER table EMP ADD PhoneNo number(10);

ALTER table EMP MODIFY JOB varchar2(10);

ALTER table EMP DROP COLUMN PhoneNo;
