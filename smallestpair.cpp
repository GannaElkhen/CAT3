#include <iostream> 
using namespace std ;
int main(){
int n;
int A[200];
cout<<"Enter number";
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter number"<<i+1;
cin>>A[i];}
int i=0;
int smallest=A[0]+A[1]+1;
for(i=0;i<n;i++){
for(int j=1;j<n;j++){
if(i==j||i>j)
continue;
   else if(smallest<=A[i]+A[j]+j-i)
    smallest=smallest;
    else
    smallest=A[i]+A[j]+j-i;
}


}


cout<<"The smallest pair summition is "<<smallest;






    return 0;
}
