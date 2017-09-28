//
// Created by Luis Huesca Molina on 26/09/2017.
//

#include "Graph.h"

namespace graphs
{
    template<typename T>
    Node<T>::Node()
    {

    }

    template<typename T>
    Node<T>::Node(T element)
    {
        _element = &element;
    }

    template<typename T>
    Node<T>::Node(T* element)
    {
        _element = element;
    }

    template<typename T>
    Node<T>::~Node()
    {
        // remove any trace of this node from its dependencies
        for(typename std::set<Node<T>*>::iterator it = _connected_nodes.begin();
            it != _connected_nodes.end();
            ++it)
        {
            (*it)->get_nodes().erase(this);
        }
    }

    template<typename T>
    void Node<T>::connect_node(Node<T>* const node)
    {
        _connected_nodes.insert(node);
    }

    template<typename T>
    std::set<Node<T>*> Node<T>::get_nodes()
    {
        return _connected_nodes;
    }

    template<typename T>
    T* Node<T>::get_element()
    {
        return _element;
    }

    template<typename T>
    Graph<T>::Graph()
    {

    }

    template<typename T>
    Graph<T>::~Graph()
    {
        for(typename std::set<Node<T>*>::iterator it = _nodes.begin();
            it != _nodes.end();
            ++it)
        {
            // clean nodes
            delete *it;
        }
    }

    template<typename T>
    void Graph<T>::add_edge(Node<T>* const node1, Node<T>* const node2)
    {
        node1->connect_node(node2);
        node2->connect_node(node1);
    }

    template<typename T>
    std::set< std::pair<Node<T>*, Node<T>*> > Graph<T>::get_edges()
    {
        std::set<std::pair<Node<T>*, Node<T>*> > set_of_edges;
        for (typename std::set<Node<T> *>::iterator it = _nodes.begin();
             it != _nodes.end();
             ++it) {
            std::set<Node<T> *> these_nodes = (*it)->get_nodes();
            for (typename std::set<Node<T> *>::iterator it2 = these_nodes.begin();
                 it2 != these_nodes.end();
                 ++it2) {
                set_of_edges.insert(std::pair<Node<T>*, Node<T>*>(*it, *it2));
            }
        }

        return set_of_edges;
    }

};