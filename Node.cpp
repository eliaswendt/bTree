#include "Node.h"
#include <string>

Node::Node(unsigned int id)
: id(id)
{
    //ctor
}

unsigned int Node::getID() {
    this->id;
}

void Node::setLeft(Node *node) {
    this->left = node;
}

void Node::setRight(Node *node) {
    this->right = node;
}

void Node::getLeft(Node &left) {
    left = this->left;
}

void Node::getRight(Node &right) {
    right = this->right;
}

void Node::setData(std::string data) {
    this->data = data;
}

std::string Node::getData() {
    return this->data;
}



Node::~Node()
{
    //dtor
}
