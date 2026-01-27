#include<bits/stdc++.h>
using namespace std;
int add(int a, int b) ;
double area(double radius) ;
void greet(string name) ;
int main() {    
    int a,b;
    double radius ;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    cout<<"Enter radius of circle: "<<endl;
    cin>>radius;

     string name="Welcome to C++ Programming   ";
      greet(name);
      int sum=add(a,b); 
     cout<<"Sum: "<<add(a,b)<<endl;  
    double result=area(radius);
cout<<"Area of circle: "<<result<<endl;  
    return 0;   
}
int add(int a, int b) {
    return a + b;
}

void greet(string name) {
    cout << name << endl;
}
double area(double radius) {
    const double pi = 3.14159;
    return pi * radius * radius;
}


