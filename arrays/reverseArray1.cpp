#include <iostream>
using namespace std;
int main() {
    int size,i,temp,j;
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
    for(i=0,j=size-1; i<j; i++, j--){
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
    cout<<"reverse array is: \n";
    for(i=0;i<size;i++){
      cout<<A[i]<<"\n";
    }
   return 0;
}
