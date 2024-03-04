CREATE TABLE ZIPCODES(
    ZIP number(6),
    CITY varchar(10),
    PRIMARY KEY(ZIP));

CREATE TABLE EMPLOYEES(
    ENO number(3),
    ENAME varchar(10),
    ZIP number(6),
    HDATE date,
    PRIMARY KEY(ENO),
    FOREIGN KEY(ZIP) REFERENCES ZIPCODES(ZIP));

CREATE TABLE PARTS(
    PNO number(3),
    PNAME varchar(10),
    QOH number(3),
    PRICE number(5),
    LVL number(2),
    PRIMARY KEY(PNO));

CREATE TABLE CUSTOMERS(
    CNO number(3),
    CNAME varchar(10),
    STREET varchar(30),
    ZIP number(6),
    PHONE number(10),
    PRIMARY KEY (CNO),
    FOREIGN KEY(ZIP) REFERENCES ZIPCODES(ZIP));

CREATE TABLE ORDERS(
    ONO number(3),
    CNO number(3),
    ENO number(3),
    PRECEIVED date,
    SHIPPED date,
    PRIMARY KEY(ONO),
    FOREIGN KEY(CNO) REFERENCES CUSTOMERS(CNO),
    FOREIGN KEY(ENO) REFERENCES EMPLOYEES(ENO));

CREATE TABLE ODETAILS(
    ONO number(3),
    PNO number(3),
    QTY number(5),
    PRIMARY KEY(ONO,PNO),
    FOREIGN KEY (ONO) REFERENCES ORDERS(ONO),
    FOREIGN KEY (PNO) REFERENCES PARTS(PNO));
