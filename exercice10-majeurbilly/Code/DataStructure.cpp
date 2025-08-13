#include "stdafx.h"
#include "DataStructure.h"
#include "Stack.h"

DataStructure::DataStructure()
  : firstNode(nullptr)
{
}

DataStructure::DataStructure(const DataStructure& src)
  : firstNode(nullptr)
{
}

DataStructure::~DataStructure()
{
  while (firstNode != nullptr)
  {
    Node *node = firstNode;
    firstNode = firstNode->getNext();
    delete node;
  }
}

unsigned int DataStructure::size() const
{
  const Node* current = getFirstNode();
  unsigned int count = 0;
  while (current != nullptr)
  {
    count++;
    current = current->getNext();
  }
  return count;
}

void DataStructure::setFirstNode(Node* node)
{
  this->firstNode = node;
}

const Node* DataStructure::getFirstNode() const
{
  return this->firstNode;
}

Node* DataStructure::getFirstNode()
{
  return this->firstNode;
}

bool DataStructure::isEmpty() const
{
  // return (0==size());
  return (firstNode == nullptr);
}
