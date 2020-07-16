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

bool isSorted(struct Node* n){
  int number = -32768;
  struct Node *pointer;
  pointer = head;
  while(pointer){
    if(pointer->data > number) {
     number = pointer-> data;
     pointer = pointer -> next;
    }
    else{
      cout<<"\nLinked list is not sorted\n";
      return false;
    }
}
cout<<"\nLinked list is sorted\n";
return true;

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

int insertIntoSorted(struct Node* n){
  int element;
     cout<<"Enter the element: \n";
     cin>>element;
     struct Node* new_Node;
     new_Node = new Node();
     struct Node *p;
     p = head;
     struct Node *q;
     q = NULL;
     while(p && p-> data < element){
        q = p;
        p = p -> next;
     }
     q -> next = new_Node;
     new_Node -> data = element;
     new_Node -> next = p;
     display();
     return 0;
}

int main() {
  int element;
   insert(30);
   insert(25);
   insert(20);
   insert(15);
   insert(10);
   cout<<"The linked list is: ";
   display();
   count();
   if(isSorted(head)){
     insertIntoSorted(head);
   }
   else{
     cout<<"Please sort first \n";
   }
   return 0;
}
