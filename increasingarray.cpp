#include <iostream> 
using namespace std ;
int main(){

int num[200];
int i,n,N;
int x=0;
cout<<"Enter number < 200 ";
cin>>n;
for( i=0;i<n;i++){
cout<<"Enter number"<<i+1;
cin>>N;
num[i]=N;}
for(i=1;i<n;i++){
    
if(num[i]>=num[i-1])
 x+=1;
else{
cout <<"This array is not increasing";
break;}
    }

if(x==n-1)
cout<<"This array is increasing";
return 0;






}