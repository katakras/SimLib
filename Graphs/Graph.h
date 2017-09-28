//
// Created by Luis Huesca Molina on 26/09/2017.
//

#ifndef SIMLIB_GRAPH_H
#define SIMLIB_GRAPH_H

#include <set>

namespace graphs
{

    template<typename T>
    class Node
    {
    public:
        Node();
        Node(T*);
        Node(T);
        ~Node();
        std::set<Node*> get_nodes();
        void connect_node(Node*);
        T* get_element();
    private:
        T* _element;
        std::set<Node*> _connected_nodes;
    };

    template<typename T>
    class Graph
    {
    public:
        Graph();
        ~Graph();
        void add_edge(Node<T>*, Node<T>*);
        std::set<std::pair<Node<T>*, Node<T>*> > get_edges();
    private:
        std::set<Node<T>*> _nodes;
    };

};

#endif //SIMLIB_GRAPH_H
