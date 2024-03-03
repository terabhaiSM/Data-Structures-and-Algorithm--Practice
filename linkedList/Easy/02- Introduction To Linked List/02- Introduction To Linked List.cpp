/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    int i=1;
    Node* firstNode= new Node(arr[0]);
    Node* tempNode= firstNode;
    while(i<arr.size())
    {
        Node* currentNode= new Node(arr[i]);
        tempNode->next= currentNode;
        tempNode=currentNode;
        i++;
    }
    return firstNode; 
}