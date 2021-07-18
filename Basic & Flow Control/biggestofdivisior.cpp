#include<iostream>
using namespace std;
int main(){
    int num1,num2,g;
    cin>>num1>>num2;
     if(num1>num2)g=num1;
     else g=num2;
     for(int i=g;i>=1;i--){
         if((num1%i==0) && (num2%i==0)){
             cout<<i;
             break;
         }
     }
}