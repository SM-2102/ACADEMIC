CREATE table EMP(
	EMPNO number(4) check (EMPNO>=7000 AND EMPNO<=8000),
	ENAME varchar(10),
	JOB char(10),
	MGR number(4),
	HIREDATE date,
	SAL number(6),
	COMM number(6) DEFAULT 0 check (COMM<1500),
	DEPT_NAME varchar(10),
	CONSTRAINT const_chk IF(JOB='Salesman',COMM>=0,COMM=0);