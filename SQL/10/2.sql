CREATE OR REPLACE TRIGGER update_salary_trigger
BEFORE UPDATE ON EMP
FOR EACH ROW
BEGIN
    IF NEW.SALARY<=500 THEN
        SET NEW.SALARY := 10000;
    ELSE
        NEW.SALARY := 15000;
    END IF;
END;