#include <iostream>
using namespace std;
int DEqueue[100], n;
int front=-1, rear=-1;
void insertAtEnd(){
  int ele;
  if(rear== n-1){
    cout<<"queue is full\n";
  }
  else{
    cout<<"Enter the element: ";
    cin>>ele;
    front = 0;
    rear++;
    DEqueue[rear] = ele;

  }
}
void dequeueBeg() {
   if (front == - 1 || front > rear) {
      cout<<"Queue is Empty \n";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< DEqueue[front] <<endl;
      front++;;
   }
}
void insertAtBeg(){
  int ele;
  if((front==-1 && rear==-1)){
    cout<<"queue is empty\n";
    insertAtEnd();
  }
  else if(front==0){
    insertAtEnd();
  }
  else if(front>0){
    cout<<"Enter the element: ";
    cin>>ele;
    front--;
    DEqueue[front] = ele;
  }
}

void dequeueEnd() {
   if (rear != - 1) {
     cout<<"deleted ele from the dequeue is: "<<DEqueue[rear]<<"\n";
     rear--;
   } else {
      cout<<"queue is already empty\n";
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
    cout<<DEqueue[i]<<"\n";
  }
}
int sum(){
  int i, sum;
    for(i=front; i<=rear; i++){
      sum = sum + DEqueue[i];
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
  cout<<"1: Insert element at end of queue \n";
  cout<<"2: Delete element from start of queue \n";
  cout<<"3: Display queue \n";
  cout<<"4: Insert element at start of queue \n";
  cout<<"5: Delete element at end of queue \n";
  cout<<"6: Exit! \n";

  do{
  cout<<"\nEnter what you want to do: ";
  cin>>option;
  switch (option){
   case 1: {
     insertAtEnd();
     break;
   }
   case 2: {
       dequeueBeg();
       break;
   }
   case 3: {
     display();
     break;
   }
   case 4: {
     insertAtBeg();
     break;
   }
   case 5: {
     dequeueEnd();
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
