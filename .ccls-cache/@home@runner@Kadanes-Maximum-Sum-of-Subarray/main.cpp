#include <bits/stdc++.h>
using namespace std;
int max(int a,int b){
  if(a>b)
  {
    return a;
  }
  else{
    return b;
  }
}
int maxSum(int *arr,int n){
  int result=arr[0];
  int maxtill=arr[0];
  for(int i=1;i<n;i++){
    maxtill=max(maxtill+arr[i],arr[i]);
    result=max(result,maxtill);
  }
  return result;
  
}
int main() {
 int arr[]={2,10,-10,4,5,6,-6};
  int n=sizeof(arr)/sizeof(int);
  cout <<maxSum(arr,n)<<endl;
}