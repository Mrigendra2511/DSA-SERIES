#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // 1. Take 2 integers input and print the greatest of them.
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    if(a>b)
    cout<<a<<" a is greater ";
    else cout<<b<<" b is greater";

    //     2. Given the radius of the circle predict whether numerically area of this circle is
    //     larger than the circumference or not.

    int radius;
    cout<<" enter the radius";
    cin>>radius;
    float area=radius*radius;
    cout<<area<<endl;;
    float circumference=2*3.14*radius;
    cout<< circumference<<endl;;
    if(area >circumference)
    cout<<" area is greater";
    else
    cout<<" circumference if greater";

    //     3. Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years).
    int year;
    cout<<" enter the year";
    cin>>year;
    if( year%4==0 || year%100!=0 && year%400==0){
        cout<<year<<" it is a leap year";
    }else
    cout<<year<<" not a leap year";

    // 4. Given the length and breadth of a rectangle, write a program to find whether
    //      numerically the area of the rectangle is greater than its perimeter.

    int l,b;
    cout<<" enter length and breadth";
    cin>>l>>b;
    float area=l*b;
    cout<<area<<endl;
    float perimeter=2*(l+b);
    cout<<perimeter<<endl;
    if(area> perimeter){
        cout<< area<<" is greater";
    }
    else{
        cout<<perimeter<<" is greatter";
    }
    //     5. Write a program to input sides of a triangle and check whether a triangle is
    //     equilateral, scalene or isosceles triangle.

    int l,b,h;
    cout<<" enter the sides";
    cin>>l>>b>>h;
    if(l==b==h){
        cout<<" it is equilatral triangle";
    }
    else if(l==b||b==h||l==h){
        cout<<" it is isoceles triangle";
    }
    else{
        cout<<" it is scalen triangle";
    }

    //     6. If the marks of A, B and C are input through the keyboard, write a program to
    //     determine the student scoring least marks.
    int a,b,c;
    cout<<" enter the marks of these students";
    cin>>a>>b>>c;
    if(a>b&&a>c){
       cout<<" a got the highest marks";
    }
    else if(b>a&&b>c){
        cout<<" b got the highest marks";
    }
    else if(c>a&&c>b){
        cout<<" c got the highest marks";
    }else{
            cout<< "they got same marks";
        }

    //     7. Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at
    //     the origin, viz. (0, 0).

    int x,y;
    cout<<" enter the values";
    cin>>x>>y;
    if(x==0&&y==0){
        cout<<x<<","<<y<<" points r at the origin";
    }
    else if(x==0&y>0){
        cout<<x<<","<<y<<" point lies at y axis";
    }
    else if(x>0&&y==0){
        cout<<x<<","<<y<<" points lies at y axis";
    }
    else
    cout<<"invalid points";

    //     8. Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all
    //     the three points fall on one straight line

    int x1,y1,x2,y2,x3,y3;

    cout<<" enter points";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float m1=(x2-x1)/(y2-y1);
    float m2=(x3-x2)/(y2-y1);
    if(m1==m2){
        cout<<" points form a straight line ";
    }
    else{
        cout<<"does not form a straight line";
    }
    //     9. Write a C++ program to input any character and check whether it is the alphabet,
    //     digit or special character.
    char ch;
    cout<<" enter anay char";
    cin>>ch;
    ch=int(ch);
    cout<<ch;

    // 9. Write a C++ program to input any character and check whether it is the alphabet,
    // digit or special character.
    char ch;
    cout << "enter any char";
    cin >> ch;
    int a = int(ch);
    if ((a >= 0 && a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 127)){
    cout << " special char"; 
}
    else if (a >= 48 && a <= 57){
            cout<< " digit";
        }    else cout << " alphabet";



//  answer of question 10 
// c=200
//  question 14
//  hell world
//  question 15
// hello
//  question 16
// error
// question 17
// hello 


// // The minimum angle between hour and minute hand when the time is 9 angle is 90
// // degress.
int hour,min;
cout<<" enter hour and min";
cin>>hour>>min;
int h_ang= hour*30;
int m_ang=min*6;
int diff=abs(h_ang-m_ang);//multily  the equation with -1
cout<<diff;
if(diff>180){
    diff=360-diff;
    cout<<"min angle is"<<diff; 
}

// 2. Write a menu-driven program.
// a) Cm to ft
// b) Km to miles
// c) USD to INR
// d) Exit
cout<<" enter your choice\n1.cm to ft\n2.km to miles\n3.usd to inr\4.exit";
int choice;
cin>>choice;
switch(choice){
    int cm,ft;
    case 1:cout<<" enter data in cm ";
    cin>>cm;
    ft=cm/30.48;
    cout<<ft;
    break;
    case 2:
    int km,miles;
    cout<<" enter data in km";
    cin>> km;
    km=km/1.609;
    cout<< miles;
    break;
    case 3: int usd,inr;
    cout<<" enter data in usd";
    cin>> usd;
    usd=usd*86.95;
    cout<<usd;
    break;
    default:
    cout<<" exit";

}





}