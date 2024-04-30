#include <bits/stdc++.h>
using namespace std;
// Singly Linked List -- Dated 02/04/2024.
struct Node
{
public:
     int data;
     Node *next;
public:
     Node(int data1)
     {
          data = data1;
          next = NULL;
     }
     Node(int data1, Node *nextly)
     {
          data = data1;
          next = nextly;
     }
};

Node *fromArray2LL(vector<int> &arr)
{
     Node *head = new Node(arr[0]);
     Node *mover = head;
     for (int i = 1; i < arr.size(); i++)
     {
          Node *temp = new Node(arr[i]);
          mover->next = temp;
          mover = temp;
     }
     return head;
}
//the above function prints only the head of the LL.
void *thy(vector<int> &arr){
     Node* head = fromArray2LL(arr);
     Node* temp = head;
     while (temp != nullptr)
     {
          cout << temp->data << " ";
          temp = temp->next;
     }
     return nullptr;
}
//Node* insertNodesofLL, deleteNodeLL, mergeNodeLL, searchElementInLL, reverseNodeLL, findMidOfLL, palindromeOfLL, 

int main()
{
     vector<int> arr = {2, 3, 5, 7, 11};
     //Node *ok = new Node(arr[0], nullptr);
     Node *head = fromArray2LL(arr);
     cout << thy(arr);
     return 0;
}
