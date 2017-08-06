// Ques:
// WAP to Insert a Node at the Tail of a Linked List (Hackerrank Data Structure)

//CODE:

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *a = new Node;
    Node *np = new Node;
    if(head == NULL)
    {
        a->data = data;
        a->next = NULL;
        head = a;
    }
    else
    {
        np = head;
        while(np->next != NULL)
        {
            np = np->next;
        }
        a->data = data;
        a->next = NULL;
        np->next = a;
    }
    
    return head;
}
