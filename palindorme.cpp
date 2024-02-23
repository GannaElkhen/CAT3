#include <iostream> 
using namespace std ;
int main(){

    int nums[500];
    int i,n,N;
    cout<<"Enter numbers";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter number"<<i+1;
    cin>>N;
    nums[i]=N;}

for(int i=0;i<n||i>=n;i++){
    if(nums[i]==nums[n-1])
    n-=1;
    else {
    cout<<"This array is not palindrome";
    break;
    } 
    if(n==0){
    cout<<"This array is it palindrome";
    break;}

    }
    








    return 0;
}