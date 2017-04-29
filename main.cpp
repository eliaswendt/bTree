#include <iostream>
#include "Tree.h"
#include "Node.h"
#include <string>
#include <sstream>

using namespace std;


int main(int argc, char* argv[]) {

    Node *root = new Node(6); // = new Node("myRoot");
    Tree *myTree = new Tree(root);


	cout << "root node id: " << root->getID() << endl;

    unsigned id;
    string input, data;

    Node *current;

    while (true) {


	cout << endl << "ID: ";
	cin >> id;
	cout << "data: ";
	cin >> data;

	current = new Node(id);
	current->setData(data);

    }





    return 0;
}
