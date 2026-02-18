#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the number of elements you want to insert: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter elements "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"The elements in the vector are: ";
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
