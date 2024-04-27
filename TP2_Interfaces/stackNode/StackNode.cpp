#include "StackNode.h"

/// @brief Constructor. Crea un nodo con el item i.
/// @param i El StackableObject para el nodo.
StackNode::StackNode(StackableObject* i)
{
    this->item = i;
    this->prev = NULL;
}

/// @brief Destructor. El item no es eliminado.
StackNode::~StackNode()
{
}

/// @brief Devuelve el nodo anterior.
/// @return El nodo anterior.
StackNode* StackNode::getPrevNode()
{
    return this->prev;
}

/// @brief Setea el nodo anterior.
/// @param node Nodo.
void StackNode::setPrevNode(StackNode* node)
{
    this->prev = node;
}

/// @brief Devuelve el item del nodo.
/// @return Item.
StackableObject* StackNode::getObject()
{
    return this->item;
}