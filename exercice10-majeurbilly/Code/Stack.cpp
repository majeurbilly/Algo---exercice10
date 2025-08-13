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
	if (isEmpty()) // v�rifie si la pile est vide
	{
		throw std::exception("Stack is empty");  // lance une exception todo: qui faudra catch�
	}
	return getFirstNode()->getContent(); // retourne une r�f�rence constante
	// getFirstNode retourne un pointeur vers le premier n�ud de la pile
	// -> pour acc�der � la m�thode
	// retourne une r�f�rence vers le contenu stock� dans ce n�ud
	// r�f�rence constant = �viter une copie + emp�cher la modification + acc�der � l�objet original
}

void Stack::push(const Content& content)
{
	Node* node = new Node(); // cr�� un nouveau noeud sur le tas (new Node();)
	node->setContent(content); // set le contenu dans le nouveau noeud
	node->setNext(getFirstNode()); // chainer le nouveau pointe vers l�ancien premier
	setFirstNode(node); // mettre le nouveau noeud avec sont contenu sur le top de la chaine
}

void Stack::pop()
{
	if (isEmpty()) // v�rifie si la pile est vide
	{
		throw std::exception("Stack is empty");  // lance une exception todo: qui faudra catch�
	}
	Node* nodeToDelete = getFirstNode(); // Le n�ud � supprimer
	Node* current = nodeToDelete->getNext();
	delete nodeToDelete;
	setFirstNode(current); // Le suivant devient le premier
}

void Stack::display() const
{
	if (isEmpty()) // v�rifie si la pile est vide
	{
		std::cout << "Stack is empty" << std::endl;
	}
	else
	{
		const Node* current = getFirstNode(); // Initialise un pointeur vers le premier n�ud
		while (current != nullptr) // Parcourt la pile tant qu�il y a des n�uds
		{
			current->getContent().display(); // Affiche le contenu du n�ud courant 
			current = current->getNext(); // Passe au n�ud suivant
		}
	}

}







