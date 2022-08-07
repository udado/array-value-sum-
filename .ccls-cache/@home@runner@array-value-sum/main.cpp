#include <iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter the size of array "<<endl;
  cin>>size;
  
  int num[size];
  int target;
  int ex[size];
  int result;
  cout<<"enter the target number "<<endl;
  cin>>target;
  cout<<"enter the values of array "<<endl;
  for(int i=0;i<size;i++){
    cin>>num[i];
  } for(int i=0;i<size;i++){
    ex[i]=num[i];
    }
  for(int i=0;i<size;i++){
    for(int j=size-1;j>=0;j--){
      result=num[i]+ex[j];
      if(target==result){
        cout<<"["<<i<<","<<j<<"]"<<endl;
      }
    }
    result=0;
  }
  
  return 0;
}