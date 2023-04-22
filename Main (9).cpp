// sum of elements in the given range
#include<iostream>
using namespace std;
int getsum(int arr[],int l,int r){
  int res=0;
  for(int i=l;i<=r;i++)
    res=res+arr[i];
    return res;
}
int main(){
  int arr[]={2,3,4,5,6,8,9};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<getsum(arr,1,3);
  return 0;
}