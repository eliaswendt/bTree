#ifndef TREE_H
#define TREE_H

#include "Node.h"

class Tree
{
    public:
        Tree(Node * root);
        virtual ~Tree();

        bool insert(Node *node);
        void remove(unsigned int id);
        Node* search(unsigned int id);
        void balance();

    private:

        Node *root;
        unsigned int lowestID;
};

#endif // TREE_H
