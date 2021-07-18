#include<iostream>
using namespace std;
int main(){
    int n,a,b; 
    cout<<"Press 1 for Addition \n Press 2 for subtraction \n Press 3 for Multiplication \n";
    cin>>n;
    cout<<"Enter 2 numbers \n";
    cin>>a>>b;
    switch(n){
        case 1:cout<<a+b; break;
        case 2:cout<<a-b; break;
        case 3:cout<<a*b; break;
        default:cout<<"enter a valid option"; 
    }
}