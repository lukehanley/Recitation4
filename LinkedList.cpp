#include "LinkedList.hpp"

using namespace std;

/*******************************
Mandatory: Silver Problem - Implement the insert and search functions
********************************/

// Search for a specified key and return a pointer to that node
// MANDATORY_TODO: complete this function
// Given the key this function will find the node where the key is present
// If found it will return the node, else NULL
Node* LinkedList::searchList(int key) {

    Node* ptr = NULL;

    return ptr;
}

// Add a new node to the list
// This function will add a node with newKey after the prev node in the linked list
// if prev is null insertion is to be made at head
void LinkedList::insert(Node* prev, int newKey){
  if(head == nullptr) {
    head = new Node;
    head->key = newKey;
    head->next = nullptr;
  }
  else if(prev == nullptr) {
      Node* newNode = new Node;
      newNode->key = newKey;
      newNode->next = head;
      head = newNode;
  }
  else {
      Node* newNode = new Node;
      newNode->key = newKey;
      newNode->next = prev->next;
      prev->next = newNode;
  }
}

/*******************************
MANDATORY_TODO: Gold Problem - Implement the swapNodes function
********************************/

// Swap the second to last and last nodes (don't just swap the values). Swap the Nodes.
bool LinkedList::swapNodes()
{
    bool isSwapped = false;

    return isSwapped;
}

// Print the keys in your list
void LinkedList::printList(){
  Node* temp = head;

  while(temp->next != NULL){
    cout<< temp->key <<" -> ";
    temp = temp->next;
  }

  cout<<temp->key<<endl;
}
