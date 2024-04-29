DECLARE
	acc_num NUMBER;
	amt NUMBER;
	min_balance constant number := 1000;
BEGIN
	acc_num := &acc_num;
		
	SELECT SAL INTO amt 
	FROM EMP
	WHERE empno = acc_num;
	
	IF amt < min_balance
	THEN
		UPDATE EMP SET sal = sal-100 WHERE empno=acc_num;
	END IF;
END;
/