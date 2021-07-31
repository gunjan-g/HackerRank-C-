/*

Program Link:
https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

Theory:
A pointer in C++ is used to share a memory address among different contexts (primarily 
functions). They are used whenever a function needs to modify the content of a variable, 
but it does not have ownership.

In order to access the memory address of a variable, val, prepend it with & sign. For 
example, &val returns the memory address of val.

This memory address is assigned to a pointer and can be shared among functions. For 
example, int* p=&val assigns the memory address of val to pointer p. To access the 
content of the memory pointed to, prepend the variable name with a *. For example, *p 
will return the value stored in val and any modification to it will be performed on val.

void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
} 

Sample Input:
4
5

Sample Output:
9
1

Explanation:
a' = 4+5= 9
b' = |4-5|= 1

*/

#include <stdio.h>

void update(int *a,int *b) {
     *a=*a+*b;              //add the contents of the pointer a and b

    // storing the mod of difference of contents of pointer a and b
    if((*a-*b)-*b>0)       
      *b=(*a-*b)-*b;
    else
      *b=*b-(*a-*b);    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

