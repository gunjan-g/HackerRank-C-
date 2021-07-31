/*

Program Link:
https://www.hackerrank.com/challenges/c-tutorial-strings/problem

Theory:
C++ provides a nice alternative data type to manipulate strings, and the data type is 
conveniently called string. Some of its widely used features are the following:

Declaration: string a = "abc";

Size: int len = a.size();

Concatenate two strings:
string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".

Accessing i(th) element:
string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'
s[0] = 'z';         // s = "zbc"

Sample Input:
abcd
ef

Sample Output:
4 2
abcdef
ebcd af

Explanation:
a= "abcd"
b= "ef"
|a|= 4
|b|= 2
a+b "abcdef"
a'= "ebcd"
b'= "af"

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;

    //taking input pf strings a and b from user
    cin>>a;
    cin>>b;
    
    //displaying size of strings
    int l1,l2;
    l1=a.size();
    l2=b.size();
    cout<<l1<<" "<<l2;
    
    //concatenate(join) two strings
    string c= a+b;
    cout<<"\n"<<c;
    
    //interchanging the first word of both strings
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<"\n"<<a<<" "<<b;
    
    return 0;
}
