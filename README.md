#Please Like Me
---

* This is my second completed Problem from the many PS's of CodeChef.com .
* Actually this is the third but the second one I have not added it in the repo. here .
<<<<<<< HEAD
* This actually a very easy question but good for a beginner to get a feel of the recursive function .
=======
* This acctually a very easy question but good for beginner to get a feel of the recursive function .
>>>>>>> origin/master
* This has around 300 submissions .
* And yes,Even I am undergoing a learning procedure .
* So,suggestions are most welcome .
* Email me @ kaushikpeace@gmail.com .


***
###The Problem Statement is as follows .
***
In a far away dystopian world, the measure of the quality of a person’s life is the numbers of likes he gets for an article about their life. For a person to stay alive, he has to acquire at least L number of likes before D days pass.

People in this world employ various techniques to increase the number of likes. One of the famous ones is to dis-like and re-like their own article once per day. On doing so you can assume that the number of likes for the post increase by a constant factor C.

So if one starts with S likes on Day-1, he would have D2 = S + C * S likes on Day-2, D3 = D2 + D2 * C on Day-3 etc. You are to answer if the person would survive at the end of Day-D or not.

Input

First line contains a single positive integer T denoting the number of test cases. The following T lines represent a test case each. Each test case contains 4 space-separated integers L, D, S and C.

Output

For each test case, print a single line containing “ALIVE AND KICKING” if the person would live, otherwise print, “DEAD AND ROTTING”.

Constraints

1 <= T <= 1000

1 <= L <= 1000000000

1 <= D <= 1000000000

1 <= S <= 1000000000

1 <= C <= 1000000000

Sample cases:

<b>Input :</b>

2<br>
5 1 5 1<br>
10 2 2 2

<b>Output : </b>

ALIVE AND KICKING<br>
DEAD AND ROTTING

<b>Explanation</b>

In the first case by the end of Day-1 we would be having S that is 5 number of likes, as it is ≥ L, the answer is ALIVE AND KICKING.

In the second case, D2 =S + C*S, therefore D2 = 2 + 2 * 2 = 6, as 6 is less than 10, the answer is DEAD AND ROTTING. 

---

