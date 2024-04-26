#include "StackNode.h"


StackNode::StackNode(StackableObject* i)
{
    this->item = i;
    this->prev = NULL;
}

StackNode::~StackNode()
{
}

StackNode* StackNode::getPrevNode()
{
    return this->prev;
}

void StackNode::setPrevNode(StackNode* node)
{
    this->prev = node;
}

StackableObject* StackNode::getObject()
{
    return this->item;
}