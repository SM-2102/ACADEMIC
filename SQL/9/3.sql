DECLARE cursor c1 IS
	SELECT ENAME,SAL
	FROM EMP
	ORDER BY SAL DESC;
	name varchar(10);
	salary number(6);
BEGIN
	OPEN c1;
	LOOP
		fetch c1 into name,salary;
		exit when c1 % rowcount > 7;
		DBMS.OUTPUT.PUTLINE(name || '   ' || salary);
	END LOOP;
END;
/