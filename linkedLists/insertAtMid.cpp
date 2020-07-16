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

void insertAtMid(int item, int total){
  struct Node* middle;
  middle= new Node();
  struct Node *pttr;
  pttr =head;
  int i;
  cout<<"\nEnter the ele you wish to insert at middle: \n";
  cin>>item;
  int mid = total/2;
  for(i=1;i<mid; i++){
    pttr = pttr -> next;
  }
  middle -> next = pttr -> next;
  pttr -> next = middle;
  middle -> data = item;

}
void display() {
   struct Node* ptr;
   ptr = head;
   cout<<"The linked list is: ";
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
  int item;
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(13);
   insert(9);
   insert(100);
   display();
   insertAtMid(item,count());
   display();
   return 0;
}
