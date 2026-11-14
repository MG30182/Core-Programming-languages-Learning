SET @num = 67;

SELECT
CASE
    WHEN @num % 2 = 0 THEN 'Even number'
    ELSE 'Odd number'
END AS RESULT;