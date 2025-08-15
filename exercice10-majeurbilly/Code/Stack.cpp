#include "stdafx.h"
#include "Stack.h"
#include <iostream>


Stack::Stack() : DataStructure()
{

}

Stack::Stack(const Stack& src)
{


}

Stack::~Stack()
{
	while (!isEmpty())
	{
		pop();
	}
}

const Content& Stack::top() const
{
	if (isEmpty()) // verifie si la pile est vide
	{
		throw std::exception("Stack is empty");  // lance une exception todo: qui faudra catche
	}
	return getFirstNode()->getContent(); // retourne une reference constante
	// getFirstNode retourne un pointeur vers le premier neud de la pile
	// -> pour acceder e la methode
	// retourne une reference vers le contenu stocke dans ce neud
	// reference constant = eviter une copie + empecher la modification + acceder e leobjet original
}

void Stack::push(const Content& content)
{
	Node* node = new Node(); // cree un nouveau noeud sur le tas (new Node();)
	node->setContent(content); // set le contenu dans le nouveau noeud
	node->setNext(getFirstNode()); // chainer le nouveau pointe vers leancien premier
	setFirstNode(node); // mettre le nouveau noeud avec sont contenu sur le top de la chaine
}

void Stack::pop()
{
	if (isEmpty()) // verifie si la pile est vide
	{
		std::cout << "Stack is empty" << std::endl;
	}
	Node* nodeToDelete = getFirstNode(); // Le neud e supprimer
	Node* current = nodeToDelete->getNext();
	delete nodeToDelete;
	setFirstNode(current); // Le suivant devient le premier
}

void Stack::display() const
{
	if (isEmpty()) // verifie si la pile est vide
	{
		std::cout << "Stack is empty" << std::endl;
	}
	else
	{
		const Node* current = getFirstNode(); // Initialise un pointeur vers le premier neud
		while (current != nullptr) // Parcourt la pile tant queil y a des neuds
		{
			current->getContent().display(); // Affiche le contenu du neud courant 
			current = current->getNext(); // Passe au neud suivant
		}
	}

}







