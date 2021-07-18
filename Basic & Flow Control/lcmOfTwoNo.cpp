#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,g;
    cin>>num1>>num2;
    g=max(num1,num2);
    for(int i=g;i<=(num1*num2);i++){
        if(i%num1==0 && i%num2==0){
            cout<<i<<endl;
            break;
        }
    }

}