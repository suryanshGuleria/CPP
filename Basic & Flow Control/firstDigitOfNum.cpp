#include<iostream>
using namespace std;
int main(){
    int digit;
    cin>>digit;
    while(1){
        if(digit/10==0){
            cout<<digit;
            break;
        }
        else
        digit=digit/10;
    }

}