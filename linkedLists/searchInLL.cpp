#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int count(){
  struct Node *p = head;
  int total = 0;
  while(p){
    total++;
    p = p-> next;
  }
  cout<<"\ntotal nodes are: "<<total;
  return total;
}
int search(struct Node* n){
  int position  = 1;
  int element;
  cout<<"\nEnter the element you want to search: \n";
  cin>>element;
   struct Node *pointer;
   pointer = head;
   while(pointer){
     if(pointer -> data == element){
       cout<<"Element is present at "<<position<<" ";
       return position;
     }
     else{
       position ++;
       pointer = pointer -> next;
     }
   }
}

int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   count();
   search(head);
   return 0;
}
