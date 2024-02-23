#include <iostream> 
using namespace std ;
int main(){
int num[200];
int n,x,Q,y;
cout<<"Enter the number of elements of array";
cin>>n;
cout<<"Enter the elements of array ";
for(int i=0 ;i<n;i++){
cin>>x;
num[i]=x;
}
int k=0;
cout<<"Enter the number of queries";
cin>>Q;
for(int j=0;j<Q;j++){
    cout<<"Enter number";
    cin>>y;
for(int i=0;i<n;i++){
    if(y==num[i])
    cout<<"The position of"<< y<<"is "<< i <<"in array"<<"\n";
    else
    k+=1;
}
cout<<"\n";
if(k==n)
cout<<"-1 : this element is not exist"<<"\n";




}





return 0;
}