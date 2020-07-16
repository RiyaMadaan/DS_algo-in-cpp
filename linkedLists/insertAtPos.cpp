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

void insertAtPos(int pos, int ele, int total){
  int i;
    cout<<"Enter the position you want to insert: \n";
   cin>>pos;
   cout<<"Enter the ele you want to insert: \n";
   cin>>ele;
   struct Node *pttr;
   pttr = head;
   struct Node* node;
   node = new Node();
   if(pos<=total+1){
   for(i=1;i<pos-1;i++){
      pttr = pttr-> next;
   }
    node -> next = pttr-> next;
    pttr -> next = node;
    node -> data = ele;
     display();
   }
}
int main() {
  int ele, pos,i;
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   insertAtPos(pos, ele, count());
   return 0;
}
