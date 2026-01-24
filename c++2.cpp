#include <iostream>
using namespace std;
int main() {
    int age;
    float height;
    char section;
    cout << "Enter your age: "<<endl;
    cin >> age; 
    cout << "Enter your height (in cm): "<<endl;
    cin >> height;
    cout << "Enter your section: "<<endl;
    cin >> section;
    cout << "You are " << age << " years old, " << height << " cm tall, and your section is " <<section << "." << endl;
}