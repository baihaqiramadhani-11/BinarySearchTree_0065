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
}
