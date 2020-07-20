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

int printMid(int total){
  struct Node *pttr;
  pttr =head;
  int i;
  int mid = total/2;
  for(i=0;i<mid; i++){
    pttr = pttr -> next;
  }
  cout<<"\nMiddle element is: "<<pttr-> data;
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
   printMid(count());
   return 0;
}
