#include <iostream>
using namespace std;
int main() {
    int size,i,j;
    int *A, *B;
    A = new int[size];
    B = new int[size];
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
    // reverse copying into another array B
    for(i=size-1, j=0; i>=0; i--, j++){
      B[j] = A[i];
    }
    // direct copy from array B to array A
    for(i=0;i<size;i++){
       A[i] = B[i];
    }
    cout<<"Reversed Array is:\n";
    for(i=0;i<size;i++){
      cout<<A[i]<<"\n";
    }
   return 0;
}s
