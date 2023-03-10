"""
Problem
Given four integers x, y, a and b. Determine if there exists a binary string having x 0's and y 1's such that the total number of subsequences equal to the sequence "01" in it is a and the total number of subsequences equal to the sequence "10" in it is b.
A binary string is a string made of the characters '0' and '1' only.
A sequence 'a' is a subsequence of a sequence 'b' if 'a' can be obtained from 'b' by deletion of several (possibly, zero or all) elements.

Input Format
The first line contains a single integer T (1 <= T <=10**5), denoting the number of test cases.
Each of the next T lines contains four integers x, y, a and b ((1 <= x,y <= 10**5, (0 <= a,b <=10**9)), as described in the problem.
Output Format
For each test case, output "Yes" (without quotes) if a string with given conditions exists and "No" (without quotes) otherwise.

Sample Input
3
3 2 4 2
3 3 6 3
3 3 4 3
Sample Output
Yes
Yes
No
Explanation
When x, y, a and b are 3, 2, 4 and 2 respectively, string 00110 is a valid string. So answer is Yes
When x, y, a and b are 3, 3, 4 and 3 respectively, we can't find any valid string. So answer is No.

Time Limit: 2
Memory Limit: 256
Source Limit:
"""

test_cases = int(input())
for i in range(test_cases):
    x, y, a, b = input().split()
    if int(x)*int(y) == int(a)+int(b):
        print("Yes")
    else:
        print("No")

#solution is derived using the i/o examples
#brute-force approach
