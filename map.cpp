#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> words;
    words[1]="Hi";
    words[2]="Hello";
    words[3]="Bye";
cout<<"Words:\n";
for(map<int,string>::iterator it=words.begin();it!=words.end();it++)
    cout<<it->first<<" "<<it->second<<"\n";
