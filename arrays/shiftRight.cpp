#include <iostream>
using namespace std;
int main() {
    int size,i;
    int *A;
    A = new int[size];
    cout<<"Enter the size of array:\n";
    cin>>size;
    cout<<"Enter the elements of array:\n";
    for(i=0;i<size;i++){
      cin>>A[i];
    }
    cout<<"Array is:\n";
    for(i=0;i<size;i++){
      cout<<A[i]<<"\n";
    }
      for(i=size-1;i>=0;i--){
        A[i+1] = A[i];
      }
      A[0] = 0;
      cout<<"Resulting array after right shift is:\n";
      for(i=0;i<size;i++){
      cout<<A[i]<<"\n";
    }
   return 0;
}
