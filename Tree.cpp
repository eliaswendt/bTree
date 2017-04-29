#include "Tree.h"
#include "Node.h"
#include <iostream>


// set root
Tree::Tree(Node *root)
: root(root)
{
    this->root = root;
    this->nodeCount = 1;
    //ctor
}

Tree::~Tree()
{
    //dtor
}


bool Tree::insert(Node *node) {

    Node *current = root;
    unsigned nodeID = node->getID();
    unsigned currentNodeID;

    while (true) {

        // buffer of current node
        currentNodeID = current->getID();

	std::cout << "[loop]: " << currentNodeID << std::endl;

        // nodeID is smaller than current nodeID
        if (nodeID < currentNodeID) {

            std::cout << "choosing left node" << std::endl;

            // left child is not set
            if (current->getLeft() == NULL) {
                current->setLeft(node);

                std::cout << "left is null -> inserting" << std::endl;

                this->nodeCount++;
                return true;
            }
            std::cout << "hier simma" << std::endl;

            // left child is not empty
            current = current->getLeft();
        }

        // nodeID is greater than current nodeID
        else if (nodeID > currentNodeID) {

            std::cout << "choosing right node" << std::endl;

            // right child is not set
            if (current->getRight() == NULL) {
                current->setRight(node);

                std::cout << "right is null -> inserting" << std::endl;

                this->nodeCount++;
                return true;
            }
            std::cout << "hier simma" << std::endl;

            current = current->getLeft();
        }

        else {
	    std::cout << "already in use!" << std::endl;

            // nodeID already in use
            return false;
        }

        std::cout << "weitere runde" << std::endl;
    }
}


bool Tree::remove(unsigned nodeID) {

    Node *current = root;
    Node *parent;

    bool parentSide; // false = left, true = right

    while(true) {

        if (nodeID < current->getID()) {

            // id does not exist in tree
            if (current->getLeft() == NULL) {

                return false;
            }

            parent = current;
            current = current->getLeft();

            parentSide = false;
        }
        else if (nodeID > current->getID()) {

            // id does not exist in tree
            if (current->getRight() == NULL) {

                return false;
            }
            parent = current;
            current = current->getRight();

            parentSide = true;
        }

        // zu loeschender Node wurde gefunden
        else {


            Node *left = current->getLeft();
            Node *right = current->getRight();

            // if node is a leaf
            if (left == NULL && right == NULL) {


                if (parentSide) {
                    parent->setLeft(NULL);
                }
                else {
                    parent->setRight(NULL);
                }
            }

            // if node has left child
            else if (left != NULL && right == NULL) {

                if (!parentSide) {
                    parent->setLeft(current->getLeft());
                }
                else {
                    parent->setRight(current->getLeft());
                }
            }

            // if node has right child
            else if (left == NULL && right != NULL) {

                if (!parentSide) {
                    parent->setLeft(current->getRight());
                }
                else {
                    parent->setRight(current->getRight());
                }
            }


            // if node has left AND right child
            else {

                if (!parentSide) {
                    parent->setLeft(current->getLeft());
                }
                else {
                    parent->setRight(current->getLeft());
                }

            }
        }

        delete current;
        return true;
    }
}


Node* Tree::search(unsigned int nodeID) {

    Node *current = root;

    while (true) {

        // left
        if (nodeID < current->getID()) {

            if (current == NULL) {
                return NULL;
            }
            else {
                current = current->getLeft();
            }
        }

        // right
        else if (nodeID > current->getID()) {

            if (current == NULL) {
                return NULL;
            }
            else {
                current = current->getRight();
            }
        }

        // nodeID == current.getID()
        else {
            return current;
        }
    }
}
