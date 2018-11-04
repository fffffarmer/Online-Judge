#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
    #include <iostream>
    #include "linkQueue.h"
    using namespace std;

    template <class Type>
    class tree
    {
    private:
        struct node
        {
            Type data;
            node *son, *bro;

            node(Type d, node *s = NULL, node *b = NULL): data(d), son(s), bro(b){}
            ~node(){}
        };

        node *root;

    public:
        tree(node *t = NULL): root(t){}
        void createTree(Type flag);
        void preOrder();
        void postOrder();
        void levelOrder();

    private:
        void preOrder(node *t);
        void postOrder(node *t);
    };

#endif