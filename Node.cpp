#include "Node.h"
#include <string>

Node::Node(unsigned int id)
: id(id)
{
    //ctor
}

Node::~Node()
{
    //dtor
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

Node* Node::getLeft() {
    return this->left;
}

Node* Node::getRight() {
    return this->right;
}

void Node::setData(std::string data) {
    this->data = data;
}

std::string Node::getData() {
    return this->data;
}
