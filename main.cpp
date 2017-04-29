#include <iostream>
#include "Tree.h"
#include "Node.h"
#include <string>
#include <sstream>

using namespace std;


int main(int argc, char* argv[]) {

    Node *root = new Node("myRoot");

    Tree *bTree = new Tree(root);



    string input;
    while (true) {

        getline(cin, input);


        bTree->insert(new Node(input));
    }





    return 0;
}
