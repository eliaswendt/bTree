#ifndef NODE_H
#define NODE_H

#include <string>


class Node
{
    public:
        Node(unsigned int id);
        ~Node();

        unsigned int getID();
        void setLeft(Node *node);
        void setRight(Node *node);
        void getLeft(Node &left);
        void getRight(Node &right);
        void setData(std::string data);
        std::string getData();

    private:

        unsigned int id;

        Node *left;
        Node *right;

        std::string data;
};

#endif // NODE_H
