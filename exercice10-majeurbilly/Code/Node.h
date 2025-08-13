#pragma once
#include "Book.h"
typedef Book Content;

class Node
{
public:

  Node();
  ~Node();
  Node* getNext() const;
  void setNext(Node* _next);
  const Content& getContent() const;
  Content& getContent() ;
  void setContent(const Content& _content);

private:
  Content content; 
  Node* next; /**< Pointeur vers le n�ud suivant. */
};


