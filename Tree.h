#ifndef TREE_H
#define TREE_H

#include "Node.h"

class Tree
{
    public:
        Tree(Node * root, bool debug);
        ~Tree();

        bool insert(Node *node);
        bool remove(unsigned id);
        Node* search(unsigned id);
        void balance();

        bool importJSON(const char* fileName);
        bool exportJSON(const char* fileName);

    private:
        bool debug;
        bool swapNodes(Node *node1, Node *node2);
        Node *root;
        unsigned lowestFreeID;
};

#endif // TREE_H
