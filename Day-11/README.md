## Problem 1: TestVita 
TCS is working on a new project called "TestVita". There are N modules in the project. Each module (i) has completion time denoted in number of hours (Hi) and may depend on other modules. If Module x depends on Module y then one needs to complete y before x. As Project manager, you are asked to deliver the project as early as possible. Provide an estimation of the amount of time required to complete the project. 
## Input Format: 
First line contains T, number of test cases. For each test case: 
1. First line contains N, number of modules. 
2. Next N lines, each contain: (i) Module ID (Hi) Number of hours it takes to complete the module (D) Set of module ids that i depends on integers delimited by space. 
## Output Format: 
 Output the minimum number of hours required to deliver the project. 
## Constraints: 
1. 1 <= T <= 10 

2. 0 < N < 1000; number of modules 

3. 0 < i <= N; module ID 

4. 0 < Hi < 60; number of hours it takes to complete the module i 

5. 0 <= |D| < N; number of dependencies 6. 0 < Dk <= N; module ID of dependencies 

![image](https://user-images.githubusercontent.com/61023747/89309611-3ff76000-d691-11ea-92a9-4910dd93f170.png)

### Explanation: 
Module 2 depends on module 1, hence complete module 1 first After completing module 1 we can complete module 2 and then module 3 Module 4 and 5 can be started simultaneously in parallel after module 3 is completed. Hence the answer = 5 + 6 + 3 + 2 = 16 



## Problem 2: Saving for a rainy day 

By nature, an average Indian believes in saving money. Some reports suggest that an average Indian manages to save approximately 30+% of his salary. Ramu is one such hard working fellow. With a view of future expenses, Ramu resolves to save a certain amount in order to meet his cash flow demands in the future. 
Consider the following example. Ramu wants to buy a TV. He needs to pay Rs 2000/per month for 12 installments to own the TV. If let's say he gets 4% interest per annum on his savings bank account, then Ramu will need to deposit a certain amount in the bank today, such that he is able to withdraw Rs 2000/per month for the next 12 months without requiring any additional deposits throughout. 
Your task is to find out how much Ramu should deposit today so that he gets assured cash flows for a fixed period in the future, given the rate of interest at which his money will grow during this period. 

## Input Format: 

First line contains desired cash flow "M" Second line contains period in months denoted by "T" Third line contains rate per annum "R" expressed in percentage at which deposited amount will grow 

## Output Format: 

Print total amount of money to be deposited now rounded off to the nearest integer 

## Constraints: 

M > 0 T > 0 R >= 0 Calculation should be done upto 11digit precision 

![image](https://user-images.githubusercontent.com/61023747/89310041-d3c92c00-d691-11ea-9297-e6b04854e23a.png)

![image](https://user-images.githubusercontent.com/61023747/89310111-e5aacf00-d691-11ea-9a98-e23e0cc6f2d9.png)

## Problem 3:

In the Byteland country a string "S" is said to be a super ascii string if and only if the count of each character in the string is equal to its ascii value. 

In the Byteland country ascii code of 'a' is 1, 'b' is 2 ...'z' is 26. 

Any string "S" can be converted to a super ascii string by performing operations like addition, removal or replacement of a character. 

The cost of Addition, remove and replace is given by 

• Addition - 2 

• Removal - 3 

• Replace - 1 

Here, a program is given to find the cost of a Super ASCII string.. However the code is wrongly arranged. Copy the same code given below, understand the logic and rearrange the code as per required output. 

![image](https://user-images.githubusercontent.com/61023747/89310366-37535980-d692-11ea-96eb-2e19f6893222.png)
