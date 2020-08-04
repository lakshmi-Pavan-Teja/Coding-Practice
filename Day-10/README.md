## Problem 1:

### Statement

Tom the cat is brushing up his Math skills. He has a bag containing N balls of different colors. Now Tom can randomly pick any even number of balls from the bag. Tom wants to find out the sum of all such combinations of balls that he can pull out from the bag. He can pull out at max K balls in one pick.
Input Format:

First line contains two space separated numbers N and K

### Output Format:

The output is the sum of all the combinations of balls he can pull out modulo 10^9+7 i.e. (1000000007)

### Constraints:
1. 0<=N,k<=10^14
2. N >= k

![image](https://user-images.githubusercontent.com/61023747/89305840-c3628280-d68c-11ea-9880-e94d9d3a0fcc.png)

## Problem 2:

### Statement

A JSON object is a key-value pair data structure that is enclosed within { }. A sample JSON object would look like

{

"key1":"value1",

"key2":"value2",

"key3": {

"key4":"value4",

"key5":"value5"}

"key6":"value6",

"key7":[

{

"key8":"value8"

}]

}

Given a JSON object, ignore the literal values of the object and check whether the distinguishing characters and notation of the object are valid to determine if the JSON object is valid or not.

### Note:
1. Key3 points to another JSON object (Concept of nesting of JSON objects).
2. Key7 points to an array of JSON objects.
3. You may wish to refer site1 to get a more formal description of JSON grammar. site2,site3; are also good resources to understand JSON specifications. 

### Input Format:
First line contains a pattern of JSON without any literal

### Output Format:

Print 1 if pattern is valid, -1 otherwise.

### Constraints:
1. A JSON object should start with '{' and ends with a '}'.
2. The key and value should be separated by a ':'.
3. A ',' suggests an additional JSON property.
4. An array only consists of JSON objects. It cannot contain a "key":"value" pair by itself.

### Example 1:

### Input
{:[{},{}]}

### Output
1

### Explanation
{
"Key": [{

"Key": "Value"

}, {

"Key": "Value"

}]

}
Pattern is following all constraints hence prints 1

### Example 2:

### Input
{:{[]},{}}

### Output
-1

### Explanation
Convert this pattern in a JSON Object

{

"Key": {

[

"Key": "Value"

]

},

{

"Key": "Value"

}

}

### Constraint 4 :
  "An array only consists of JSON objects. It cannot contain a "key":"value" pair by itself." not followed here, so it's a invalid pattern, hence prints -1


