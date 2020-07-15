#include <iostream>
using namespace std;
int main(){
  int size,i,index, number,ind,max, min ,sum = 0,diff;
  int *A;
  A = new int[size];
  cout<<"Enter the size of the array:\n";
  cin>>size;
  cout<<"Enter elements of array:\n";
  for(i=0;i<size;i++){
    cin>>A[i];
  }
  cout<<"Array is:\n";
   for(i=0;i<size;i++){
    cout<<A[i]<<"\n";
  }
  // using get
  cout<<"Enter the index you want to check the resp number:\n";
  cin>>index;
  if(index >= 1 && index < size){
      cout<<A[index];
  }
  // using set
  cout<<"Enter the index you want to change value:\n";
  cin>>ind;
  cout<<"Enter the number you want to set:\n";
  cin>>number;
  if(ind>=0 && ind<size){
    for(i=0;i<size;i++){
    A[ind] = number;
  }
  }
  cout<<"Resulting array is:\n";
  for(i=0;i<size;i++){
    cout<<A[i]<<"\n";
  }
  // finding max
  max = A[0];
  for(i=1;i<size;i++){
    if(A[i]>max){
      max = A[i];
    }
  }
  cout<<"Max is: "<<max<<"\n";
  // finding min
  min = A[0];
  for(i=0;i<size;i++){
    if(A[i]< min){
      min = A[i];
    }
  }
  cout<<"Min is: "<<min<<"\n";

  // finding sum of all elements
  for(i=0;i<size;i++){
    sum += A[i];
  }
  cout<<"sum is: "<<sum<<"\n";
//  finding diff of all elements
  for(i=0;i<size;i++){
    diff -= A[i];
  }
  cout<<"diff is: "<<diff<<"\n";
  // average of all elements
  cout<<"average of all elements is: "<<sum / size<<"\n";
  return 0;
}
