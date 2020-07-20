#include <iostream>
using namespace std;
int queue[100], n;
int front=-1, rear=-1;
void insert(){
  int ele;
  if(rear== n-1){
    cout<<"queue is full\n";
  }
  else{
    cout<<"Enter the element: ";
    cin>>ele;
    front = 0;
    rear++;
    queue[rear] = ele;

  }
}
void dequeue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue is Empty \n";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void display(){
  int i, length =0 , sum =0;
  if(front == -1){
    cout<<"queue is empty \n";
  }
  else{
    cout<<"queue is: \n";
    for(i=front; i<=rear;i++)
    cout<<queue[i]<<"\n";
  }
}
int sum(){
  int i, sum;
    for(i=front; i<=rear; i++){
      sum = sum + queue[i];
      }
      cout<<"sum is: "<<sum<<"\n";
      return 0;
}
int length(){
  int i, length =0;
    for(i=front;i<=rear;i++){
     length++;
  }
  cout<<"length is: "<<length<<"\n";
  return length;
}
int main() {
  int option;
  cout<<"Enter how many elements you want to insert: ";
  cin>>n;
  cout<<"1: Insert element to queue \n";
  cout<<"2: Delete element from queue \n";
  cout<<"3: Display queue \n";
  cout<<"4: Sum of all elements in queue \n";
  cout<<"5: Length of queue \n";
  cout<<"6: Exit! \n";

  do{
  cout<<"\nEnter what you want to do: ";
  cin>>option;
  switch (option){
   case 1: {
     insert();
     break;
   }
   case 2: {
       dequeue();
       break;
   }
   case 3: {
     display();
     break;
   }
   case 4: {
     sum();
     break;
   }
   case 5: {
     length();
     break;
   }
   case 6: {
     cout<<"Exit";
     break;
   }
    default:
      cout<<"Enter right choice \n";
      break;
 }
  } while(option!=6);
  return 0;
}
