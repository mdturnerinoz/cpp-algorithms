# C++ Binary Exercise with Example Code to Develop Your Algorithm Skills

Once you understand the basics of C++ programming language, it is essential for you to develop your problem solving skills using C++ program. In other words, you should know how to develop your programming logic to solve a given problem.

In this tutorial, we’ll give a simple binary problem, which you should solve by writing a C++ program.

##Problem Definition

The user will enter the number of digits (n) of a binary number. You need to write a C++ program that will generate all binary numbers with n ciphers, of which two are ones and the rest of ciphers are zeros.

For example:

<pre>
User input: n=3
Program output: 011, 101, 110.

User input: n=4
Program output: 0011, 0101, 0110, 1001, 1010, 1100.

User input: n=5
Program output: 00011, 00101, 00110, 01001, 01010, 01100, 10001, 10010, 10100, 11000..
</pre>

##Problem Analysis

We can solve this problem using several ways. The following are three possible solutions among several potential solutions.

__Algorithm 1__: Generate all n cipher binary numbers and display only those that have two ones and rest zeros in their binary presentation.

__Algorithm 2__: Try to discern the pattern, and translate those numbers into their binary format.

__Algorithm 3__: First, let us write the output as shown below. We have two markers that represent position of two ones in binary number. For simplicity we could call them the left one and the right one. At the start position, the first row, the left one is located at the second position from right end and the right one is located at far right. Right one shifts to the left side, and when it reaches the left one, it resets its position and goes to the far right end, the left one moves one position toward left end. When left one reaches left end, and the right one is just next to the left one, we stop the program.

The __first algorithm__ shown above is very straight forward. It creates a correct solution, but the processor would have many cases of unnecessary checks. However, this approach would be acceptable if we wish to display n binary numbers with k ones.

The __second algorithm__ shown above is good in terms of speed, but its implementation could be difficult to understand.

So, we’ll pick the __third algorithm__ to solve our problem.

##C++ Program Code to Solve the Problem

If you are totally new to C++ programming, you should first understand C++ class and object. http://www.thegeekstuff.com/2013/02/hello-world-cpp/

The following C++ program code was developed using the __third algorithm__ explained above, which will solve our given problem:

__cpp-algorithims.cpp (in this directory)__

##Summary

The original article from TGS can be found at:

http://www.thegeekstuff.com/2014/01/cpp-binary-exercise/?utm_source=feedburner&utm_medium=email&utm_campaign=Feed%3A+TheGeekStuff+%28The+Geek+Stuff%29

