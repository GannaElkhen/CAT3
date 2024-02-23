#include <iostream> 
using namespace std ;
int main(){
int x,n;
int nums[500];
cout<<"Enter number the elements of array";
cin>>n;
cout<<"Enter the elements of array ";
for(int i=0 ;i<n;i++){
cin>>x;
nums[i]=x;
}
cout<<nums[0];
for(int i=0;i<n;i++){
    if(i+1==n)
        break;
    
if(nums[i]==nums[i+1])
continue;

else
cout<<nums[i+1];

}


return 0;
}








































