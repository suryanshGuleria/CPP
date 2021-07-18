#include<bits/stdc++.h>
using namespace std;
int main(){
   int num;
   cin>>num;
   vector<int> v;
   while(num>0){
     int d=num%2;
     v.push_back(d);
     num=num/2;
   }
   for(int i=v.size()-1;i>=0;i--){
       cout<<v[i];
   }
}