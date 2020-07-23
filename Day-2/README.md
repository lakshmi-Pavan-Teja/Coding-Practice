## Problem 1:
  Yaswanth and Sweety are off to the wedding of a close relative. This time they have to travel without their guardians. Yaswanth got very interested in the arrangement of     seats inside the train coach.
The entire coach could be viewed as an arrangement of consecutive blocks of size 8.
 Berth Number   Compartment
 1 -  8           	1 
 9 - 16           	2 
17 - 24               3 
... and so on
Each of these size-8 blocks are further arranged as:
 
 1LB,  2MB,  3UB,  4LB,  5MB,  6UB,  7SL,  8SU 
 9LB, 10MB, ...
 ...  
 ...
Here LB denotes lower berth, MB middle berth and UB upper berth.
The following berths are called Train-Partners:
 
3UB   |  6UB 
2MB   |  5MB 
1LB   |  4LB 
7SL   |  8SU 
and the pattern is repeated for every set of 8 berths.
Yaswanth and Sweety are playing this game of finding the train partner of each berth. Can you write a program to do the same?
Input
The first line of input contains a single integer T, denoting the number of test cases to follow.
Each of the next T lines contain a single integer N, the berth number whose neighbour is to be found out.
Output
The output should contain exactly T lines each containing the berth of the neighbour of the corresponding seat.
### Constraints
#### Subtasks
Subtask #1 (50 points):
1 ≤ T ≤ 8
1 ≤ N ≤ 8
Subtask #2 (50 points):
1 ≤ T ≤ 100
1 ≤ N ≤ 500
### Example
    Input:
    3
    1
    5
    3

### Output:
    4LB
    2MB
    6UB



## Problem 2:
   ### Dogs and Cats:-
 
Chef is a farmer and a pet lover. He has a lot of his favourite pet’s cats and dogs in the barn. He does not know their exact count. But he knows that there are C cats and D dogs in the barn. Also, one day went to field and found that there were L legs of the animals touching the ground. Chef knows that cats love to ride on the dogs. So, they might ride on the dogs, and their legs won't touch the ground and Chef would miss counting their legs. Chef's dogs are strong enough to ride at max two cats on their back.It was a cold foggy morning, when Chef did this counting. So, he is now wondering whether he counted the legs properly or not. Specifically, he is wondering is there some possibility of his counting being correct. Please help Chef in finding it.
### Input
First line of the input contains an integer T denoting number of test cases. T test cases follow.
The only line of each test case contains three space separated integers C, D, L denoting number of the cats, number of the dogs and number of legs of animals counted by Chef, respectively.
### Output
For each test case, output a single line containing a string "yes" or "no" (both without quotes) according to the situation.
### Constraints
1 ≤ T ≤ 105
0 ≤ C, D, L ≤ 109
Subtasks
Subtask #1 (20 points)
1 ≤ T ≤ 104
0 ≤ C, D ≤ 102
Subtask #2 (30 points)
1 ≤ T ≤ 105
0 ≤ C, D ≤ 103
Subtask #3 (50 points)
Original constraints
  
 
### Example
##### Input:
3
1 1 8
1 1 4
1 1 2
##### Output:
yes
yes
no

## Problem 3:
     Bearland has infinitely many cities, numbered starting from 1. Some pairs of cities are connected with bidirectional roads:
·         There are roads 1-2, 3-4, 5-6, 7-8, and so on (there is a road between cities 2*i+1 and 2*i+2 for every non-negative integer i).
·         There are roads 1-3, 3-5, 5-7, 7-9, ... (between every two consecutive odd numbers).
·         There are roads 2-4, 4-6, 6-8, 8-10, ... (between every two consecutive even numbers).
You are given Q queries. In each query, for the given pair of different cities a and b, you should check if there is a road between them. For each query, print "YES" or "NO" accordingly.
### Input
The first line of the input contains an integer Q, denoting the number of queries.
Each of the following Q lines contains two distinct integers a and b, denoting two cities in one query.
### Output
For each query, output a single line containing the answer — "YES" if there is a road between the given cities a and b, and "NO" otherwise (without the quotes).
### Constraints
·         1 ≤ Q ≤ 1000
·         1 ≤ a, b ≤ 109
·         a ≠ b
### Example
### Input:
5
1 4
4 3
5 4
10 12
1 3
### Output:
NO
YES
NO
YES
YES
### Explanation
In the example test, the answer is "YES" for pairs (4, 3), (10, 12), (1, 3) and (999999999, 1000000000). Roads 3-4 and 1-3 you can see on the drawing in the statement.
The answer is "NO" for example for a pair (1, 4), because there is no road between cities 1 and 4.

## Problem 4:
The program must accept an integer N as the input. The program must print the integer with the largest digits sum from 1 to N as the output. If more than one integers contain the largest digits sum, then print the largest integer among them as the output.

### Input Format:
The first line contains the value of N.

### Output Format:
The first line contains the integer with the largest digits sum.

### Constraints :
	1<=N<=100000

### Example Input/Output 1:
#### Input:
100
#### Output:
99

### Explanation:
sum of digits in 1 is 1
sum of digits in 2 is 2

sum of digits in 98 is 17
sum of digits in 99 is 18
sum of digits in 100 is 1
From 1 to 100, 99 has the largest digit sum (9 + 9 = 18).

Example Input/Output 2:
Input:
48
Output:
48
Example Input/Output 3:
Input:
521
Output:
499


