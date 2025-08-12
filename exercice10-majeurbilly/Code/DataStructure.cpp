#include "stdafx.h"
#include "DataStructure.h"

DataStructure::DataStructure()
  : firstNode(nullptr)
{
}

DataStructure::DataStructure(const DataStructure& src)
  : firstNode(nullptr)
{
  // PROF
  // Ne pas copier le premier pointeur!
}

DataStructure::~DataStructure()
{
}

unsigned int DataStructure::size() const
{

  unsigned int count = 0;

  // A COMPLETER

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
  // A COMPLETER
  // Remplacer le return false par le code approprié
  return false;
}
