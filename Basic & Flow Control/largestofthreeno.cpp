#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 numbers \n";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"1st is greatest";
    else if(b>a && b>c)
    cout<<"2nd is greatest";
    else
    cout<<"3rd is greatest";
}