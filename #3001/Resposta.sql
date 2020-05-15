
SELECT x.name,x.price FROM products y inner join (

SELECT name,CASE
            WHEN type = 'A'
               THEN 20.0
			WHEN type = 'B'
               THEN 70.0
			WHEN type = 'C'
               THEN 530.5
       END as price
FROM products
) as x on x.name = y.name order by type, id desc