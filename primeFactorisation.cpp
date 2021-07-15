#include<iostream>
using namespace std;
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void primeFactors(int n){
    int x;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            x=i;
            while(n%x==0){
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the number to find the factors of : \n";
    cin>>n;
    primeFactors(n);
}