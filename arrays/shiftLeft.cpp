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
      for(i=0;i<size;i++){
        A[i] = A[i+1];
      }
      A[size-1] = 0;
      cout<<"Resulting array after left shift is:\n";
      for(i=0;i<size;i++){
      cout<<A[i]<<"\n";
    }
return 0;
}
