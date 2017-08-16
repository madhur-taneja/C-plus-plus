//Ques:
//WAP to get node value of a particular position from the tail. (Hackerrank Data Structures)

//CODE:

int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node* counter = new Node();
    Node* pn = new Node();
    pn = head;
    counter = head;
    int count = 0;
    while(counter->next != NULL)
    {
        counter = counter->next;
        count++;
    }
    int pos;
    pos = count - positionFromTail;
    
    for(int i = 0; i < pos; i++)
    {
        pn = pn->next;
    }
    return pn->data;
}
