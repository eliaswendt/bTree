#ifndef TREE_H
#define TREE_H

#include "Node.h"

class Tree
{
    public:
        Tree(Node * root);
        ~Tree();

        bool insert(Node *node);
        bool remove(unsigned id);
        Node* search(unsigned id);
        void balance();

    private:

        Node *root;
        unsigned lowestFreeID;
};

#endif // TREE_H
