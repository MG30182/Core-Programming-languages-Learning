-- 1. userinput isn't possible normally so change these two numbers at the top before you run ts
-- → userinput isn't  possible cuz sql is a declarative querying language, diff from python and c
SET @a = 6;
SET @b = 7;

-- 2. calculate and display the sum (SELECT is the print statement as it builds the table)
-- → if we were doing ts in the mysql terminal it would go as:
-- → SELECT @a AS 'First Number', @b AS 'Second Number', (@a + @b) AS 'Total Sum';
SELECT 
    @a AS 'First Number', 
    @b AS 'Second Number', 
    (@a + @b) AS 'Total Sum';

/*
SET @a = 15;
→this creates a variable called "a" and stores the number 15 inside it
→the "@" symbol is how MySQL marks something as a variable

SET @b = 42;
→this does the same thing for the second variable, "b", storing 42 inside it

SELECT @a AS 'First Number', @b AS 'Second Number', (@a + @b) AS 'Total Sum';
→this displays the values instead of pulling them from a table
→"@a and "@b" show the numbers we stored above
→"(@a + @b)" adds the two variables together on the spot
→"AS 'label'" just renames each column heading so the output is easy to read
*/