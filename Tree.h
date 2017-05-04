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
        std::string serialize(Node *current);
        void balance();

    private:

        bool swapNodes(Node *node1, Node *node2);
        Node *root;
        unsigned lowestFreeID;
};

#endif // TREE_H
