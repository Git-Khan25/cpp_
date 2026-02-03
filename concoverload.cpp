#include<iostream>
using namespace std;
class student{
    int roll;
    int marks;
    public:
    student(){
        marks=0;
        roll=0;
    }
      student(int r){
        roll=r;
        marks=0;
      }
      student(int r,float m){
        marks=m;
        roll=r;
  }
  void display(){
      cout<<"Roll: "<<roll<<", Marks: "<<marks<<endl;
  }
  
};
int main(){
    student s1;
    student s2(101);
    student s3(102,95.5);
    s1.display();
    s2.display(); 
    s3.display();

    return 0;
}