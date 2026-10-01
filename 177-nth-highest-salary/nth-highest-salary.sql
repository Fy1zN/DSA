CREATE OR REPLACE FUNCTION NthHighestSalary(N INT)
RETURNS TABLE (Salary INT) AS $$
BEGIN

    IF N <= 0 THEN
        RETURN QUERY SELECT NULL::INT;
        RETURN;
    END IF;

    RETURN QUERY
    SELECT DISTINCT e.salary
    FROM Employee e
    ORDER BY e.salary DESC
    LIMIT 1
    OFFSET N - 1;

END;
$$ LANGUAGE plpgsql;