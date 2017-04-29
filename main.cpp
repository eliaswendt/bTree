#include <iostream>
#include "Tree.h"
#include "Node.h"
using namespace std;


int main(int argc, char* argv[]) {

    Node *root = new Node("myRoot");

    Tree *bTree = new Tree(root);


    return 0;
}
