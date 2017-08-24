//Ques:
//Insert a node at the head of a linked list. (Hackerrank Data Structures)

//CODE:

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
