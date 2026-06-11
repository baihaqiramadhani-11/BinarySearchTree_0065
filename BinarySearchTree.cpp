#include <iostream>
#include <string>   
using namespace std;


class Node 
{
    public:
    string info;
    Node *lelftchild;
    Node *rightchild;

    //constructor for the mode class
    Node (string i, Node *l, Node *r)
    {
        info = i;
        lelftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public: 
    Node *ROOT;

    BinaryTree()
    {
        ROOT = NULL; // Initializing ROOT to nul
    }
    
     // Insert a node in the binary search tree
    void insert(string element)
    {
        Node *newNode = new Node(element, NULL, NULL);

        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        Node *parent = NULL;
        Node *currentNode = NULL;