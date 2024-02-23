#include <iostream> 
using namespace std ;
int main(){
int num[200];
int n,N,i;
cout<<"Enter number ";
cin>>n;
for( i=0;i<n;i++){
cout<<"Enter the number "<<i+1;
cin>>N;
num[i]=N;}
int max=num[0];
for(i=0;i<n;i++){
    if(max>=num[i])
    max=max;
    else
    max=num[i];
    
}
int min=num[0];
for(i=0;i<n;i++){
    if(min<=num[i])
    min=min;
    else
    min=num[i];
    
}

int sum =max+min;
for(i=0;i<n;i++){
    if(num[i]==max)
    num[i]=sum-max;
    else if(num[i]==min)
    num[i]=sum-min;
    cout<<num[i];
}














    return 0;
}