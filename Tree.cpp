#include "Tree.h"
#include "Node.h"

// set root
Tree::Tree(Node *root)
: root(root)
{
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

        // nodeID is smaller than current nodeID
        if (nodeID < currentNodeID) {

            // left child is not set
            if (current->getLeft() == NULL) {
                current->setLeft(node);

                return true;
            }

            // left child is not empty
            current = current->getLeft();
        }

        // nodeID is taller than current nodeID
        else if (nodeID > currentNodeID) {

            // right child is not set
            if (current->getRight() == NULL) {
                current->setRight(node);

                return true;
            }

            // right child is not empty
            else {
                current = current->getLeft();
            }
        }

        // nodeID already in use
        return false;
    }
}


bool Tree::remove(unsigned nodeID) {

    Node *current = root;
    Node *parent;


    while(true) {

        if (nodeID < current->getID()) {

            // id does not exist in tree
            if (current->getLeft() == NULL) {

                return false;
            }
            else {
                parent = current;
                current = current->getLeft();
            }
        }
        else if (nodeID > current->getID()) {

            // id does not exist in tree
            if (current->getRight() == NULL) {

                return false;
            }
            else {
                parent = current;
                current = current->getRight();
            }
        }

        // zu loeschender Node wurde gefunden
        else {


            Node *left = current->getLeft();
            Node *right = current->getRight();

            if (left == NULL && right == NULL) {


                if (current == parent->getLeft()) {

                }
            }
            else if (left != NULL && right == NULL) {

            }
            else if (left == NULL && right != NULL) {

            }


            // jetzt wirds richtig kompliziert
            else {








            }
        }
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


void Tree::balance() {

}
