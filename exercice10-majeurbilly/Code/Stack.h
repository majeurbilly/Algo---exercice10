#pragma once
#include "Node.h"
#include "Book.h"
#include "DataStructure.h"

using namespace std;

class Stack : public DataStructure
{
public:
	Stack();
	Stack(const Stack& src);
	~Stack();
	const Content& top() const;
	void push(const Content& content);
	void pop();
	void display() const;
};

