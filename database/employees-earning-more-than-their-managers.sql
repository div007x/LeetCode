# Write your MySQL query statement below
-- SELECT e2.name as Employee
-- FROM employee e1
-- INNER JOIN employee e2 ON e1.id = e2.managerID
-- WHERE
-- e1.salary < e2.salary

SELECT e1.name AS Employee
FROM Employee e1
JOIN Employee e2 ON e1.managerId = e2.id
WHERE e1.salary > e2.salary;