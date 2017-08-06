//Ques:
// WAP to Insert a node at the head of a linked list (Hackerrank Data Structure)

//CODE:

/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* nn = new Node();
    if(head == NULL)
    {
        nn->next = NULL;
        nn->data = data;
    }
    else
    {
        nn->next = head;
        nn->data = data;
        head = nn;
        
    }
    return nn;
}
