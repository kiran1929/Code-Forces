Let's define 𝑆(𝑥)
 to be the sum of digits of number 𝑥
 written in decimal system. For example, 𝑆(5)=5, 𝑆(10)=1, 𝑆(322)=7.

We will call an integer 𝑥
 interesting if 𝑆(𝑥+1)<𝑆(𝑥). In each test you will be given one integer 𝑛. Your task is to calculate the number of integers 𝑥
 such that 1≤𝑥≤𝑛 and 𝑥 is interesting.

Input
The first line contains one integer 𝑡
 (1≤𝑡≤1000)  — number of test cases.

Then 𝑡
 lines follow, the 𝑖-th line contains one integer 𝑛
 (1≤𝑛≤109) for the 𝑖-th test case.

Output
Print 𝑡
 integers, the 𝑖-th should be the answer for the 𝑖-th test case.

Example
Input:
5
1
9
10
34
880055535
Output:
0
1
1
3
88005553
Note
The first interesting number is equal to 9.
