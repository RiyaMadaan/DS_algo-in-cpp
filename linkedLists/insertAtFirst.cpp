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

void insertAtFirst(int item){
  struct Node* start;
  start = new Node();
  cout<<"\nEnter the ele you wish to insert at first: \n";
  cin>>item;
  start -> data = item;
  start -> next = head;
  head = start;

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
   insert(9);
   display();
   insertAtFirst(item);
    display();
   return 0;
}
