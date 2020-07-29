#include <iostream>
using namespace std;
int stack[100], n=5, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow\n";
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top];
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty\n";
}
void peek(){
  cout<<"top most element is:"<<stack[top]<<"\n";
  return;
}
void isFull(){
  if(top>=n-1){
    cout<<"Stack is full\n";
  }
  else {
    cout<<"stack is not full\n";
  }
}
void isEmpty(){
  if(top<0){
    cout<<"Stack is empty\n";
  }
  else{
    cout<<"stack is not empty\n";
  }
}
int size(){
  int count=0;
  int i;
  for(i=top;i>=0;i--){
    count++;
  }
  cout<<"size of stack is: "<<count<<"\n";
  return 0;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack\n";
   cout<<"2) Pop from stack\n";
   cout<<"3) Display stack\n";
   cout<<"4) get top most element\n";
   cout<<"5) isFull\n";
   cout<<"6) isEmpty\n";
   cout<<"7) check the size of stack\n";
   cout<<"8) Exit\n";
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:\n";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            peek();
            break;
         }
         case 5: {
            isFull();
            break;
         }
         case 6: {
            isEmpty();
            break;
         }
         case 7: {
           size();
           break;
         }
         case 8: {
           cout<<"Exit";
           return 0;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=8);
   return 0;
}
