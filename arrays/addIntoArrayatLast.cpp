#include <iostream>
using namespace  std;
int main() {
  int i, size,length,number;
  int *A;
  A = new int[size];
  cout<<"Enter the total size of array:\n";
  cin>>size;
  cout<<"Enter the length of array you want to fill:\n";
  cin>>length;
  cout<<"Enter the elements of array:\n";
  for(i=0;i<length;i++){
  cin>>A[i];
  }

  cout<<"Elements in array are:\n";
  for(i=0;i<length;i++){
  cout<<A[i]<<"\n";
  }

  cout<<"Enter number you want to add:\n";
  cin>>number;
  A[length] = number;
  length++;

  cout<<"Elements in array are:\n";
  for(i=0;i<length;i++){
    cout<<A[i]<<"\n";
  }
  cout<<"Elements in final array are:\n";
  for(i=0;i<size;i++){
  cout<<A[i]<<"\n";
  }

  return 0;
}
