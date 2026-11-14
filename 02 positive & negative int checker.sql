SET @num = 67;

SELECT
CASE
    WHEN @num > 0 THEN 'positive number'
    WHEN @num < 0 THEN 'negative number'
    ELSE 'zero'
END AS RESULT;