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
   cout<<"Resultant linked list is: \n";
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
void deleteFrom(struct Node* n, int total){
  int pos,i,j;
  cout<<"\nEnter the position you want to delete: \n";
  cin>>pos;
   struct Node *pointer1;
   pointer1 = head;
   struct Node *pointer2;
   pointer2 = head;
   if(pos<=total){
   if(pos==1){
     head = head -> next;
   }
  for(i=2;i<pos;i++){
    pointer1 = pointer1 -> next;
  }
  for(j=2; j<=pos+1; j++){
      pointer2= pointer2 -> next;
  }
  pointer1 -> next = pointer2;
  display();
  return;
}
else{
  cout<<"Invalid position \n";
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
   deleteFrom(head, count());
   return 0;
}
