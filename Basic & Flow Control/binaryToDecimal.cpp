#include<bits/stdc++.h>
using namespace std;
int nod(int n){
    int flag=0;
    while(n>0){
        n=n/10;
        flag++;
    }
    return flag;
}
int main(){
    int num,sum=0,ld,lc;
    cin>>num;
    lc=nod(num);
    for(int i=0;i<lc;i++){
        ld=num%10;
        sum=sum+(pow(2,i)*ld);
        num=num/10;
    }
    cout<<sum; 
    

}