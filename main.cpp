#include <iostream>
#include "Tree.h"
#include "Node.h"
#include <string>
#include <sstream>

using namespace std;


int main(int argc, char* argv[]) {

    Node *root = new Node(10, "root");

    Tree *bTree = new Tree(root);



    int id;
    string data;

    for (int i = 0; i < 6; i++) {

        cout << "NodeID: ";
        cin >> id;
        cout << "Daten: ";
        cin >> data;
        cout << endl;

        bTree->insert(new Node(id, data));
    }

    cout << "serializing tree: " << endl << bTree->serialize(root);



    return 0;
}
