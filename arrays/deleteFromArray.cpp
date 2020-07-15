#include <iostream>
using namespace  std;
int main() {
  int *A;
  int size,i,number;
  A = new int[size];
  cout<<"Enter the size of array:\n";
  cin>>size;
  cout<<"Enter the elements of array:\n";
  for(i=0;i<size;i++){
    cin>>A[i];
  }
  cout<<"array is:\n";
  for(i=0;i<size;i++){
    cout<<A[i]<<"\n";
  }
  cout<<"Enter the number you want to search:\n";
  cin>>number;
  for(i=0;i<size;i++){
    if(A[i] == number){
      cout<<A[i]<<"is present at "<<i+1<<" position";
      return 0;
    }
  }  
  return 0;
}
