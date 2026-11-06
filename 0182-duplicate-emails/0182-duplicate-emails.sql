# Write your MySQL query statement below
SELECT DISTINCT t1.email AS Email FROM Person AS t1 INNER JOIN (
    SELECT email FROM Person GROUP BY email HAVING COUNT(*) > 1
) AS t2 ON t1.email = t2.email;