#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,flag=0;
    cin>>num;
    if(num==0 || num==1){
        cout<<"neither prime nor composite";
        return 0;
    }
    for(int i=2;i<num;i++){
    if(num%i==0){
        flag++;
        break;
        }
    }
    if(flag==1)cout<<"non prime";
    else cout<<"prime";
}