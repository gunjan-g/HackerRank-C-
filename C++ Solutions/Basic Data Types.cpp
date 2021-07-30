/*

Program Link:
https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

Theory:

Some C++ data types, their format specifiers, and their most common bit widths are as 
follows:
Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value

To read a data type, use the following syntax:
scanf("`format_specifier`", &val)

For example, to read a character followed by a double:
char ch;
double d;
scanf("%c %lf", &ch, &d);

Printing:
To print a data type, use the following syntax:
printf("`format_specifier`", val)

For example, to print a character followed by a double:
char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);

Sample Input:
3 12345678912345 a 334.23 14049.30493

Sample Output:
3
12345678912345
a
334.230
14049.304930000

Explanation:
Print int 3,
followed by long 12345678912345,
followed by char a,
followed by float 334.23,
followed by double 14049.30493.

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long int l;
    char ch;
    float f;
    double d;

    //taking input from user
    scanf("%d %ld %c %f %lf",&a,&l,&ch,&f,&d);
    
    //displaying each value in separate line
    printf("%d \n%ld \n%c \n%f \n%lf",a,l,ch,f,d);
    
    return 0;
}
