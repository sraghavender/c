create table emp(id int,FirstName varchar(255), LastName VARCHAR(255), Address VARCHAR(255));
desc emp;
create table Customers(CustomerID int,CustomerName varchar(255), ContactName VARCHAR(255), Address VARCHAR(255),City varchar(255),PostCode int,Country VARCHAR(255));

insert into Customers values(1,'Alfreds Futterkiste','Maria Anders','Obere Str. 57','Berlin',12209,'Germany'),
(2,'Ana Trujillo Emparedados y helados','Ana Trujillo','Avda. de la Constitución 2222','Mexico D.F',5021,'Mexico'),
(3,'Antonio Moreno Taquería','Antonio Moreno','Mataderos 2312','México D.F.',05023,'Mexico'),
(4,'Around the Horn','Thomas Hardy','120 Hanover Sq.','London',3000,'UK'),
(5,'Berglunds snabbkop','Christina Berglund','Berguvsvägen 8','Lulea',95822,'Sweden');

commit;

create table Products(Product int,ProductName VARCHAR(255),SupplierID int,CategoryID int,Unit Varchar(255),Prince int);
insert into PRODUCTS values(1,'Chais',1,1,'10 boxes*20 bags',18);
commit;
insert into PRODUCTS values(1,'Chang',1,1,'24 -12 oz bottles',19),
(1,'Aniseed Syrup',1,2,'12 -550 ml bottles',10),
(1,'Chef Antons Conjun Seasoning',2,2,'48 -6 oz bottles',22),
(1,'Chef Antons Gumbo Mix',2,2,'36 boxes',21.35);
commit;

select * from Products order by price ASC;

select * from customers order by COUNTRY desc, CustomerName desc;

ALTER TABLE Products RENAME COLUMN Prince to Price;

select * from CUSTOMERS where COUNTRY ='Germany' and CITY = 'Berlin' and POSTCODE > 12000;
select * from CUSTOMERS where COUNTRY = 'Mexico' and (CustomerName like 'A%' OR CUSTOMERNAME like 'M%');
select * from CUSTOMERS where COUNTRY = 'Mexico' and CustomerName like 'A%' or CustomerName like'M%';

UPDATE CUSTOMERS set CUSTOMERNAME= 'Moreno Taquería' where CustomerID=3;

select * from CUSTOMERS where COUNTRY IN ('Germany','Mexico','USA');
commit;

select CustomerID,CUSTOMERNAME from customers where ROWNUM <=3;

select * from products where price between 10 and 20;


select * from products;
select price from products;
select Min(Price) from products;
select Max(price) from products;
select Sum(price) from products;
select count(price) from products;
select count(*) from products;
select avg(price) from PRODUCTS;

CREATE table Orders(OrderID int,CustomerID varchar(255),EmployeeID int,OrderDate DATE,ShipperID int);

ALTER table orders MODIFY CustomerID int;
desc orders;

insert into orders values(10248,90,5,'7/4/1996',3);


commit;
select * from orders;

insert into orders values(10249,81,6,'7/5/1996',1),(10250,34,4,'7/8/1996',2);
commit;


select CustomerID as ID, CustomerName as Customer from Customers;

select * from tab;

select productName AS "My great product" from products;

select customername,(Address || ',' || PostCode || ',' ||City || ','||country) as Address from customers;
select * from customers;

select o.OrderID,o.OrderDate,c.CustomerName from Customers c, Orders o where c.CustomerName like 'Wilman%' AND c.CustomerID=o.CustomerID;

select orders.OrderID,orders.OrderDate,customers.customername from customers,orders where customers.customerID=orders.customerID;
select orders.OrderID,orders.OrderDate,customers.customername from customers,orders;

select orders.OrderID,orders.OrderDate,customers.customername from customers,orders where customers.customerID=orders.customerID;

insert into orders values(10308,2,3,'18-09-1996',6),
(10309,37,1,'19-09-1996',4),
(10310,77,2,'20-09-1996',5);

commit;

select orders.orderID,Customers.CUSTOMERNAME,orders.ORDERDATE from orders INNER Join Customers on orders.customerID=Customers.CUSTOMERID;

update products set PRODUCTSID =3 where productname='Aniseed Syrup';
update products set PRODUCTSID =4 where productname like 'Chef%';
update products set PRODUCTSID =5 where productname like '%Mix';

commit;

create table Categories(CatagoryID int,CatagoryName varchar(255),Descreption VARCHAR(255));

insert into CATEGORIES values(1,'Beverages','Soft drinks, coffees, teas, beers, and ales'),
(2,'Condiments','Sweet and savory sauces, relishes, spreads, and seasonings'),
(3,'Confections','Desserts, candies, and sweet breads');
commit;
select * from Categories;

desc products;
desc CATEGORIES;

-- Inner join example, CategoryID is the common field in categories and products table.

/*--  Syntax
SELECT column_name(s)
FROM table1
INNER JOIN table2
ON table1.column_name = table2.column_name;
*/

select productID,Productname,categoryname from products INNER join CATEGORIES on products.CATEGORYID=CATEGORIES.CATeGORYID;


select productID,productName,CATEGORYNAME from Products p, CATEGORIES c where p.CATEGORYID = c.CATEGORYID order by p.PRODUCTID desc;


select products.productsID,products.productName,categories.categoryID from products INNER join CATEGORIES on products.CATEGORYID=CATEGORIES.CateGORYID;

-- categories table altered
ALTER table categories RENAME COLUMN catagoryID to categoryID;
alter table categories rename column CatagoryName to categoryName;


select * from categories;

create table Shippers(ShipperID int,ShipperName varchar(255),Phone varchar(255));

insert into shippers values(1,'Speedy Express','(503)555-9831'),
(2,'United Package','(503)555-3199'),
(3,'Federal Shipping','(503)555-9931');

commit;

select * from shippers;

-- Join three tables



SELECT ProductID, ProductName, CategoryName
FROM Products
INNER JOIN Categories ON Products.CategoryID = Categories.CategoryID;

desc products;

alter table products rename column ProductsID to ProductID;


desc orders;
desc customers;
desc shippers;

select orders.orderID,customers.customerName,shippers.ShipperName from ((orders inner join customers on orders.CUSTOMERID=customers.CUSTOMERID)
inner join shippers on orders.ShipperID=shippers.shipperID);

select * from orders inner join shippers on orders.ShipperID=shippers.shipperID;


/* LEFT JOIN Syntax
SELECT column_name(s)
FROM table1
LEFT JOIN table2
ON table1.column_name = table2.column_name;
*/
select customers.customerName,customers.CUSTOMERID,orders.orderID from customers left join orders on customers.CUSTOMERID=orders.CUSTOMERID;

select * from customers;
select * from orders;
 update customers set customerID = 6 where customerName = 'Wolski';
 commit;

 /*RIGHT JOIN Syntax
SELECT column_name(s)
FROM table1
RIGHT JOIN table2
ON table1.column_name = table2.column_name;
*/
select customers.customerName,orders.orderID from customers right join orders on customers.CUSTOMERID=orders.CUSTOMERID;


create table Employees(EmployeeID int,LastName varchar(255),FirstName varchar(255),BirthDate date,Photo varchar(255));

insert into Employees values(1,'Davolio','Nancy','8/12/1968','EmplD1.pic'),
(2,'Fuller','Andrew','19/02/1952','EmplD2.pic'),
(3,'Leverling','Janet','30/08/1963','EmplD3.pic');

commit;

select * from employees;

select * from orders;
desc orders;
desc employees;

update orders set EMPLOYEEID = 1 where orderID =10309;
commit;


select orders.orderID,employees.LastName,employees.FirstName from orders right join employees on orders.EmployeeID =employees.EMPLOYEEID order by orders.orderID;



/*FULL OUTER JOIN Syntax
SELECT column_name(s)
FROM table1
FULL OUTER JOIN table2
ON table1.column_name = table2.column_name
WHERE condition;*/


select customers.customerName,orders.orderID from customers full outer join orders on customers.CUSTOMERID=orders.CUSTOMERID order by customers.CUSTOMERNAME;


/*Self Join Syntax
SELECT column_name(s)
FROM table1 T1, table1 T2
WHERE condition;*/

select A.CUSTOMERID customer1,A.customername customer1,A.CUSTOMERID customer2, B.customerName customer2, A.CITY
from customers A, customers B where A.CUSTOMERID <>  B.CUSTOMERID
and A.city = B.city order by A.CITY;

update Customers set city='Mexico D.F' where CUSTOMERID= 3;
commit;

create table Suppliers(SupplierID int,SupplierName varchar(255),ContactName varchar(255),Address varchar(255),City varchar(255),PostCode varchar(255),Country varchar(255));

insert into Suppliers values(3,'Grandma Kellys Homestead','Regina Murphy','707 Oxford Rd.','Ann Arbor','48104','USA');
commit;

select * from suppliers;

select City from customers 
UNION
select City from SUPPLIERS
order by city;

select City from customers 
UNION ALL
select City from SUPPLIERS
order by city;