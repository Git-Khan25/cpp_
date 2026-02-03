//functional overload
#include <bits/stdc++.h>
using namespace std;
class math{
    public:
    int add(int a,int b){
        return a+b;
    }
    float add(float a,float b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;         
    } 
};
int main(){
    math m;
    cout<<"Add 2 integers:"<<m.add(10,20)<<endl;
    cout<<"Add 2 floats:"<<m.add(2.5f,4.5f)<<endl;
    cout<<"Add 3 Integers:"<<m.add(1,2,3)<<endl;
}
