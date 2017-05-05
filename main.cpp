#include <iostream>
#include "Tree.h"
#include "Node.h"
#include <string>
#include <cmath>
#include <sstream>
#include <fstream>

using namespace std;


int main(int argc, char* argv[]) {

    Node *root = new Node(rand(), "root");

    Tree *bTree = new Tree(root);


    string input;


    ifstream infile;
    infile.open(argv[1]);

    while (!infile.eof()) {

        getline(infile, input);
        bTree->insert(new Node(rand(), input));
    }



/*
    while (input != "exit") {

        cout << "Enter string: ";
        getline(cin, input);
        cout << endl;
        bTree->insert(new Node(rand(), input));

    }
*/



    return 0;
}
