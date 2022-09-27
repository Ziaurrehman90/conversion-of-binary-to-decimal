#include<iostream>
using namespace std;
int main(){
   long int n,rem,pv,prod;
   long int sum=0;
  cout<<"enter the value of n"<<endl;
   cin>>n;
   pv=1;
   while(n!=0){
    rem=n%2;
    prod=rem*pv;
    sum=sum+prod;
    n=n/2;
    pv=pv*10;


   }
   cout<<sum<<endl;
  //  return 0;
}
