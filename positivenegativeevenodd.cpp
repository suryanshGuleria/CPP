#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number \n";
    cin>>n;
    if(n>0){
        cout<<"Positive ";
        if(n%2==0)
        cout<<"even";
        else
        cout<<"odd";
    }
    else if(n<0){
        cout<<"Negative ";
         if(n%2==0)
        cout<<"even";
        else
        cout<<"odd";
    }
    else
    cout<<"zero";
}