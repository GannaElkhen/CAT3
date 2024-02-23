#include <iostream> 
using namespace std ;
int main(){
int nums[500];
    int i,x,n ,min1,min2,min3;
cout<<"Enter the number of elements of array ";
cin>>n;
cout<<"Enter elements of array";
for(i=0 ;i<n;i++){
cin>>x;
nums[i]=x;}

min1=nums[0];
for(i=0;i<n;i++){
if(min1>nums[i])
min1=nums[i];
else
min1=min1;
}
min2=nums[1];
for(i=0;i<n;i++){
    if(nums[i]==min1)
    continue ;
  if(min2>nums[i])
min2=nums[i];
else
min2=min2;}     

min3=nums[2];
for(i=0;i<n;i++){
    if(nums[i]==min1 || nums[i]==min2)
    continue;

else if(min3>nums[i])
min3=nums[i];
else
min3=min3;
}
cout<<"The 3 minimum numbers are "<< min1<< min2<< min3;

    return 0;
}