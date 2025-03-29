#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // Print all the odd numbers from 1 to 100

    // for(int i=1;i<=100;i+=2){
    //     if(i%2!=0)
    //     cout<<i<<" ";
    // }

    // Print all numbers from 1 to 100 that are divisible by 3

// for (int i = 1; i <=100; i++)
// {
//    if(i%3==0)
//    cout<<i;
// }

// 3. Display this AP - 4,7,10,13,16.. upto ‘n’ terms
// int n;
// cout<<" enter no of terms";
// cin>>n;
// for (int i = 4; i<=4+(n-1)*3; i+=3)
// {
//  cout<<i<<endl;  
// }


// Display this GP - 3,12,48,.. upto ‘n’ terms
// int n;
// int a=3;
// int r=4;
// cout<<" enter n :";
// cin>>n;
// int an=a*pow(r,(n-1));
// for(int i=3;i<=an;i=i*4){
//     cout<<i<<" ";

// }


// }
// Write a C++ program to take an integer n as input and print the sum
// of the first n natural numbers using a loop.

// int sum=0;
// for (int i = 1; i <=20; i++)
//  {
//     sum+=i;
//     cout<<sum<<endl;
//  }
  
// Write a program to print all the ASCII values and their equivalent
// characters of 26 alphabets using a while loop
//for small letters
// int i=97;
// while(i<=122){
//     cout<<i<<" "<<char(i)<<endl;
//     i++;

// }
//for capital letters
// i=65;
// while(i<=90){
//     cout<<i<<" "<<char(i)<<endl;
//     i++;
//}

// Write a program to take an integer n as input and print numbers
// from n to 1 using a loop
int n;
cout<<" enter n";
cin>>n;
for (int i = n; i >=1; i--)
{
   cout<<i<<" ";
}

 
}      