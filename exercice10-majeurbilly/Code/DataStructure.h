#pragma once
#include "Node.h"

namespace TestsCode
{
  class TestsQueue;
  class TestsStack;
}
class DataStructure
{
  public:
    DataStructure();
    DataStructure(const DataStructure& src);
    virtual ~DataStructure();  // destructeur virtual permet de delete sur d'autre objet potentiel
    virtual void display() const = 0;
    unsigned int size() const;
    virtual bool isEmpty() const;
  protected:
    const Node* getFirstNode() const;
    Node* getFirstNode();
    void setFirstNode(Node* node);

  private:
    Node* firstNode; 

    // Laissez ce code ici
    friend TestsCode::TestsQueue;
    friend TestsCode::TestsStack;
};

