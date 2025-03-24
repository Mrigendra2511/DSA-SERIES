// Write a program that takes two integers as input and prints their sum.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    float sum=a+b;
    cout<<sum;

    // Take length and breadth as input (both integers) and calculate the area of the rectangle.
    int l, b;
    cout << " enter length and breadth";
    cin >> l >> b;
    float area = l * b;
    cout << area;
//Take two numbers as input and perform addition, subtraction, multiplication, and division. Display the results.
int choice;
cout<<" enter the choice\n1.mul\n2.div\n3.add\n4.sub";
cin>>choice;
int a,b;
    cout<<" enter a and b";
    cin>>a>>b;
switch(choice){
    

    case 1:cout<<a*b;
    break;
    case 2: cout<<a/b;
    break;
    case 3: cout<<a+b;
    break;
    case 4: cout<<a-b;
    break;
    default: cout<<" wrong choice entered";

}
// Take input of principle, time and rate and find the simple interest

float p,r,t;
cout<<"enter the value of p and r and t";
cin>>p>>r>>t;
float simple_interest=(p*r*t)/100;
cout<<simple_interest;
 char ch;
cout<<" enter any character";
cin>>ch;
cout<<int(ch);
// Take a floating-point number as input, typecast it into an integer, and print both values.
float ch;
cout<<" enter any float val";
cin>>ch;
cout<<int(ch);

// Take an integer between 65 and 90 as input and print its corresponding uppercaseletter.
int ch;
cout<<" enter no btw 65-90";
cin>>ch;
cout<<char(ch);

// Write a program to find the euclidean distance between two coordinates.Take bot the coordinates from the user as input.
int x1,y1;
cout<<" enter the co odrdinates";
cin>>x1>>y1;
int x2,y2;
cout<<" enter the co odrdinates";
cin>>x2>>y2;
 float euclidean_distance=sqrt((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
 cout<<euclidean_distance;
// Write a program that will tell the number of dogs and chicken are there when the
// user will provide the value of total heads and legs.
int head,leg,chicken,dog;
cout<<" enter no of heads and legs";
cin>>head>>leg;
chicken=(2*head-0.5*leg);
dog=4-chicken;
cout<<chicken<<endl<<dog;

//sum of square on n natural numbers where n will be privided by the user
int n;
cout<<" enter the numbers of term";
cin>>n; 
float sum=(n*(n+1)*(2*n+1))/6;

cout<<sum; 

//given two fractions,find the sum of those 2 fractions.take the numerator and denominator values of the fractions from the user
int a1,b1,a2,b2;
cout<<" enter the values";
cin>>a1>>b1>>a2>>b2;
float result=(a1/b1)+(a2/b2);
cout<<result;



 
}