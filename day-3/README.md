## Problem 1:
Given a paper of size A x B. Task is to cut the paper into squares of any size. Find the minimum number of squares that can be cut from the paper.
### Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers A and B denoting the two sizes of the paper.
### Output:
Print the minimum number of squares that can be cut from the paper.
### Constraints:
1<=T<=10^5

1<=A<=10^5

1<=B<=10^5
### Example:
#### Input:
2

13 29

30 35
#### Output:
9

7

## Problem 2:
Ramu has recently got a new apple broadband internet connection. His history of internet data usage is provided as below.
During the first T1 minutes, the internet data used was D1 MBs per minute, and during the next T2 minutes, it was D2 MBs per minute, and so on till during the last TN minutes it was DN MBs per minute.
The internet provider charges the Ramu , 1 Rupee for every 1 MB data used, except for the first K minutes, when the internet data is free as part of the plan provided to Ramu.
Please find out the total amount that Ramu has to pay the internet provider (in Rupees).
### Input
First line of the input contains a single integer TC the number of test cases. Description of TC test cases follow.
First line of each test case contains two space separated integers N and K.
Next N lines of each test case contains information about the internet data usage. Specifically, in the i-th line, there will be two space separated integers: Ti and Di.
### Output
For each test case output a single integer in separate line, the amount that Ramu has to pay in Rupees.
### Constraints
·         1 ≤ TC ≤ 1,000
·         1 ≤ N ≤ 10
·         0 ≤ K ≤ T1 + T2 + ... + TN
·         1 ≤ Ti, Di ≤ 10
### Example
### Input:
3

2 2

2 1

2 3

2 2

1 2

2 3

3 0

1 2

2 4

10 10

### Output:
6

3

110

## Problem 3:
### Problem: Milk Man and His Bottles
 
A Milkman serves milk in packaged bottles of varied sizes. The possible size of the bottles is {1, 5, 7 and 10} litres. He wants to supply desired quantity using as less bottles as possible irrespective of the size. Your objective is to help him find the minimum number of bottles required to supply the given demand of milk.
### Input Format:
First line contains number of test cases N 
Next N lines, each contain a positive integer Li which corresponds to the demand of milk.
### Output Format:
For each input Li, print the minimum number of bottles required to fulfill the demand 
###VConstraints:
1 <= N <= 1000
Li> 0
1 <= i <= N
### Sample Input and Output
SNo.
Input
2

17

65


### output:

2

7


