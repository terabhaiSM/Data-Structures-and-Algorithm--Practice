/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    int length=1;
    Node* temp=head;
    while(temp->next!=nullptr)
    {
        length++;
        temp=temp->next;
    }
    length=length/2;
   for(int i=0; i<length; i++)
   {
       head=head->next;
   }
    return head;
}

