/*

Program Link:
https://www.hackerrank.com/challenges/box-it/problem

Ques.
Design a class named Box whose dimensions are integers and private to the class. The 
dimensions are labelled: length l, breadth b, and height h.

The default constructor of the class should initialize l, b, and h to 0.

The parameterized constructor Box(int length, int breadth, int height) should initialize 
Box's l,b and h to length, breadth and height.

The copy constructor Box (Box B) should set l,b and h to B's l,b and h, respectively.

Apart from the above, the class should have 4 functions:
1. int getLength() - Return box's length
2. int getBreadth() - Return box's breadth
3. int getHeight() - Return box's height
4. long long CalculateVolume() - Return the volume of the box

Overload the operator < for the class Box. Box A < Box B if:
1. A.l < B.l
2. A.b < B.b and A.l == B.l
3. A.h < B.h and A.l == B.l and A.b == B.b

Overload operator << for the class Box().
If B is an object of class Box:
cout<<B should print B.l, B.b and B.h on a single line separated by spaces.

For example,
Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.

*/

#include<bits/stdc++.h>

using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

class Box{
    private:
    double l;
    double b;
    double h;

// The class should have the following functions : 
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

    public:

    Box(){                //default constructor
        l=b=h=0;
    }
    
    Box(int p,int q,int r){      //parameterized constructor
        l=p;
        b=q;
        h=r;
    }
    
    Box(Box &B){        //copy constructor
        l=B.l;
        b=B.b;
        h=B.h;
    }

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

   double getLength(){
    return l;
   }

   double getBreadth(){
    return b;
   }

   double getHeight(){
    return h;
   }

   long long CalculateVolume(){
    return l*b*h;
   }

  //Overload operator < as specified
  //bool operator<(Box& b)

   bool operator<(Box& B){

    //checking conditions
    if((l<B.l)||(b<B.b && l==B.l)|| (h<B.h && l==B.l && b==B.b)){
       return true;
    }
    else {
        return false;
    }
}

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

friend ostream& operator<<(ostream& os,Box& B){
    //overloading operator << to display the length, breadth and height
    return os<<B.l<<" "<<B.b<<" "<<B.h;   
  }

};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}