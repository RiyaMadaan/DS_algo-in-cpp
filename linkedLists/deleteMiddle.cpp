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

int deleteMid(int total){
  struct Node *pttr;
  pttr =head;
  struct Node * pttr2;
  pttr2 = pttr;
  int i;
  int mid = (total/2);
  for(i=1;i<=mid+1; i++){
    pttr = pttr -> next;
  }
  for(i=1;i<mid; i++){
    pttr2 = pttr2 -> next;
  }
  pttr2 -> next = pttr;
  return 0;
}
void display() {
   struct Node* ptr;
   ptr = head;
   cout<<"\nThe linked list is: ";
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
  int item;
   insert(3);
   insert(1);
   insert(13);
   insert(9);
   insert(100);
   display();
   deleteMid(count());
   display();
   return 0;
}
