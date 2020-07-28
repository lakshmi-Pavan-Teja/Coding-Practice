## Problem 1:
### Expand Alphabets

A string S is passed as input. S will contain multiple integer values followed by an alphabet. The program must expand the alphabets based on the previous integer value.

### Input Format:
The first line contains S.

### Output Format:
The first line contains the expanded string value.

### Boundary Conditions:
Length of S is from 2 to 100.

### Example Input/Output 1:
Input:
4a5h

Output:
aaaahhhhh

### Explanation:
As it is 4a and 5h, four a's are printed followed by 5 h's

Example Input/Output 2:

Input:
1k2b4k

Output:
kbbkkkk

## Problem 2:
Embedded Three Digit Numbers Sum

A string S is passed as the input with numbers embedded in it. The program must print the sum of all three digit numbers embedded in the string. The program must print 0 (zero) if no three digit numbers are embedded in the string.


### Input Format:
The first line will contain the string S.

### Boundary Conditions:
Length of S is from 2 to 200

### Output Format:
The sum of all three digit numbers embedded in the string.


### Example Input/Output 1:

Input:
teamscored307runsin50oversinthe3rdmatch

Output:
307

### Explanation:
307 is the only three digit number embedded. Hence the sum is also 307.


### Example Input/Output 2:

Input:
ibought234chocolates45icecreams121sticks600combsand9545mouse

Output:
955

### Explanation:
The three digit numbers embedded in the string are 234, 121 and 600. Hence sum is 955.
(9545 is a four digit number and hence not considered).

 

### Example Input/Output 3:

Input:
monkey70parrot40okay

Output:
0

### Explanation:

No three digit numbers embedded in the string

## Problem 3:
Chars To Remove For Same String Value

N string values S1, S2, S3, SN are passed as input to the program. Values of S1, S2, S3, SN are such that if one character is removed from each of these string values, then the resulting string values are equal (same).
The characters to be removed from the string values named C1, C2, C3, CN  will be different for each string.


### Input Format:
The first line will contain the value of N.
The next N lines will contain the values of strings S1 to SN.

### Boundary Conditions:
2 <= N <= 10
Length of string SN is from 2 to 200

### Output Format:
The first line will contain the characters C1, C2, C3, .. CN to be removed from each of these string without any space between them.


### Example Input/Output 1:

Input:

2

bmanabgerb

manasgsesr

Output:

bs

### Explanation:
If the character b is removed from the first string, it becomes manager.

If the character s is removed from the second string, it becomes manager.

Hence bs is printed as output.


### Example Input/Output 2:

Input:

5

abcdef

ambcde

qabcdqe

kkakbkckdke

zabczdzzze

Output:

Fmqkz


## Problem 4:

Given a string S, the program must print the count of sub palindromes (with a minimum length of two characters) in the string S.

### Boundary Conditions:
Length of the string is between 2 and 200.

### Input Format:
First line will contain the string value S.

### Output Format:
First line will contain the integer which represents the count of sub palindromes in the string S.


### Sample Input/Output:

### Example 1:
Input:

everest

Output:

2

### Explanation:

The sub palindromes are eve, ere


### Example 2:

Input:

abccbaab

Output:

5

### Explanation:

The sub palindromes are cc, bccb, aa, baab, abccba

