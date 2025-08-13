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
	if (isEmpty()) // vérifie si la pile est vide
	{
		throw std::exception("Stack is empty");  // lance une exception todo: qui faudra catché
	}
	return getFirstNode()->getContent(); // retourne une référence constante
	// getFirstNode retourne un pointeur vers le premier nœud de la pile
	// -> pour accéder à la méthode
	// retourne une référence vers le contenu stocké dans ce nœud
	// référence constant = éviter une copie + empêcher la modification + accéder à l’objet original
}

void Stack::push(const Content& content)
{
	Node* node = new Node(); // créé un nouveau noeud sur le tas (new Node();)
	node->setContent(content); // set le contenu dans le nouveau noeud
	node->setNext(getFirstNode()); // chainer le nouveau pointe vers l’ancien premier
	setFirstNode(node); // mettre le nouveau noeud avec sont contenu sur le top de la chaine
}

void Stack::pop()
{
	if (isEmpty()) // vérifie si la pile est vide
	{
		throw std::exception("Stack is empty");  // lance une exception todo: qui faudra catché
	}
	Node* nodeToDelete = getFirstNode(); // Le nœud à supprimer
	Node* current = nodeToDelete->getNext();
	delete nodeToDelete;
	setFirstNode(current); // Le suivant devient le premier
}

void Stack::display() const
{
	if (isEmpty()) // vérifie si la pile est vide
	{
		std::cout << "Stack is empty" << std::endl;
	}
	else
	{
		const Node* current = getFirstNode(); // Initialise un pointeur vers le premier nœud
		while (current != nullptr) // Parcourt la pile tant qu’il y a des nœuds
		{
			current->getContent().display(); // Affiche le contenu du nœud courant 
			current = current->getNext(); // Passe au nœud suivant
		}
	}

}







