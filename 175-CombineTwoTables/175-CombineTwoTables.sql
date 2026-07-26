-- Last updated: 7/26/2026, 4:22:22 PM
/* Write your T-SQL query statement below */
SELECT firstName, lastName, city, state
FROM Person as p
LEFT JOIN Address as a
ON p.personId = a.personId