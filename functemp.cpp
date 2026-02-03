
#include <iostream>
using namespace std;
template < class T>
T findmax(T a, T b) {
    if(a>b)
        return a;
    else
        return b;
}
int main() {
    cout << "max of integers :" <<findmax (10,20)<< endl;
    cout<< "max of float :" <<findmax (10.5f,20.5f)<< endl;
    cout<< "max of char :" <<findmax ('A','B')<< endl;
 return 0;
}