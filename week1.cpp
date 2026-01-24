#include<bits/stdc++.h>
using namespace std;
class Student {
 private:
    int roll;
    string name;
    float marks;

public:
Student() {
        roll = 0;
        name = "";
        marks = 0.0;
    }
    
    void input () {
        cout << "Enter roll number: "<<endl;
        cin >> roll;
        cin.ignore(); 
        cout << "Enter name: "<<endl;
        cin >> name;
        cout << "Enter marks: "<<endl;
        cin >> marks;
     
    }
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
  
    ~Student() {
        cout << "Data Destroyed " << name << endl;
    }
};
int main() {
    int s;
    cout << "Enter number of students: "<<endl;
    cin >> s;
    Student* students = new Student[s];  
    for(int i=0;i<s;i++){
     cout<<"Enter details of student "<<i+1<<endl;
        students[i].input();
    }
    
    cout<<"Roll No\tName\tMarks"<<endl; 
    for(int i=0;i<s;i++){
        students[i].display();
    }
    delete[] students;
    return 0;
    
}