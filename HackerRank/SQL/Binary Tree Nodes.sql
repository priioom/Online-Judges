Create table BST(N int, P int)


Select N,'ROOT' from BST Where P is null
UNION
Select Distinct N1.N,'INNER' from BST N1 JOIN BST N2 ON N1.N = N2.P Where N1.P is not null
UNION
Select Distinct N1.N,'LEAF' from BST N1 LEFT JOIN BST N2 ON N1.N = N2.P Where N2.P is null
