#include <iostream>
#include "Tree.h"
#include "Node.h"
#include <string>
#include <sstream>

using namespace std;


int main(int argc, char* argv[]) {

    Node root("fucking root!"); // = new Node("myRoot");

    Tree bTree(&root);


    string input;
    while (true) {

        getline(cin, input);
        Node current(&input);

        bTree.insert(&current);
    }





    return 0;
}
