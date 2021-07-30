/*

Program Link:
https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}

Input Format:
You will be given two positive integers, a and b (a<=b), separated by a newline.

Output Format:
For each integer n in the inclusive interval [a,b]:

If ,1<=n<=9 then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".

Sample Input:
8
11

Sample Output:
eight
nine
even
odd

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cin>>b;

    for(int n=a;n<=b;n++){            //starting loop from a to b

    if(n>=1 && n<=9){              //if the number is between 1 to 9, display the number in words
        if(n==1)
          cout<<"one \n";
        else if(n==2)
          cout<<"two \n";
        else if(n==3)
          cout<<"three \n";
        else if(n==4)
          cout<<"four \n";
        else if(n==5)
          cout<<"five \n";
        else if(n==6)
          cout<<"six \n";
        else if(n==7)
          cout<<"seven \n";
        else if(n==8)
          cout<<"eight \n";
        else if(n==9)
          cout<<"nine \n";
    }

    else if(n>9 && n%2==0){   //else if number is greater than 9 and it is an even no
       cout<<"even \n";}
    
    else                    //else (the no is greater than 9 and it is an odd no)
      {cout<<"odd \n";}
    }

    return 0;
}
