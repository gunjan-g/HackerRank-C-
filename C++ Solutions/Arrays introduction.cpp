/*

Program Link:
https://www.hackerrank.com/challenges/arrays-introduction/problem

Theory:
An array is a series of elements of the same type placed in contiguous memory locations 
that can be individually referenced by adding an index to a unique identifier.

For arrays of a known size, 10 in this case, use the following declaration:
int arr[10]; //Declares an array named arr of size 10, i.e, you can store 10 integers.

Sample Input:
4
1 4 3 2

Sample Output:
2 3 4 1

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,N, A[1000];
    cin>>N; 

    //inputting elements of array
    for(i=0;i<N;i++){
        cin>>A[i];
    }

    //displaying elements of the array
    for(i=N-1;i>=0;i--){
        cout<<A[i]<<"\t";
    }
    
    return 0;
}
