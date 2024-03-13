#include<iostream>
#include <string>

using namespace std;
int main(){
    string a,b;
    cin>>a;
    for(int i{a.size()-1};i>=0;i--){
        b+=a[i];
    }
    int a1,b1;
    a1=stoi(a);
    b1=stoi(b);
    cout<<b1<<endl;
    if(b1==a1){
        cout<<"yes";
    }
    else
    cout<<"no";

}

