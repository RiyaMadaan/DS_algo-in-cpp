#include <iostream>
using namespace  std;
int main() {
  int *A;
  int size,i;
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
  return 0;
}
