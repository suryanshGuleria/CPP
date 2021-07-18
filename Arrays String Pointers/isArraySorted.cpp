#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,3,5,4};
    int size=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++){
        if(a[i]<=a[i+1]){
            continue;
        }
        else {cout<<"No";
             return 0;
        }
    }
    cout<<"Yes";
}