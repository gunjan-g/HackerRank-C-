/*

Program Link:
https://www.hackerrank.com/challenges/c-tutorial-struct/problem

Theory:
struct is a way to combine multiple fields to represent a composite data structure, 
which further lays the foundation for Object Oriented Programming. For example, we can 
store details related to a student in a struct consisting of his age (int), first_name 
(string), last_name (string) and standard (int).

struct can be represented as
struct NewType {
    type1 value1;
    type2 value2;
    .
    .
    .
    typeN valueN;
};

Sample Input:
15
john
carmack
10

Sample Output:
15 john carmack 10

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/

struct Student{              //created a structure student
    int age;
    char first_name[60];
    char last_name[60];
    int standard;
};

int main() {
    Student st;              //structure can be accessed using an object, st here
    
    //input data for the variables in structure
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;

    //displaying the contents of a structure
    cout << st.age <<" "<< st.first_name <<" "<< st.last_name <<" "<< st.standard;
    
    return 0;
}
