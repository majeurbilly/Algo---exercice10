#pragma once
#include "Book.h"
typedef Book Content;

/**
 * @class Node
 * @brief Représente un nœud dans une structure de données chaînée contenant un livre et un pointeur vers le nœud suivant.
 *
 * La classe Node est utilisée dans les structures de données comme les listes chaînées. Elle contient un objet Book et un pointeur vers le nœud suivant.
 */
class Node
{
public:
  /**
   * @brief Constructeur par défaut.
   *
   * Initialise un objet Node avec le livre par défaut et le pointeur suivant à nullptr.
   */
  Node();

  /**
   * @brief Destructeur.
   *
   * Libère les ressources allouées par l'objet Node.
   */
  ~Node();

  /**
   * @brief Obtient le pointeur vers le nœud suivant.
   *
   * @return Pointeur constant vers le nœud suivant.
   */
  Node* getNext() const;

  /**
   * @brief Définit le pointeur vers le nœud suivant.
   *
   * @param _next Pointeur vers le nouveau nœud suivant.
   */
  void setNext(Node* _next);

  /**
   * @brief Obtient le livre contenu dans le nœud.
   *
   * @return Référence constante au livre contenu dans le nœud.
   */
  const Content& getContent() const;

  /**
   * @brief Obtient le contenu dans le nœud.
   *
   * @return Contenu dans le nœud.
   */
  Content& getContent() ;

  /**
   * @brief Définit le livre contenu dans le nœud.
   *
   * @param _book Référence constante au nouveau livre à stocker dans le nœud.
   */
  void setContent(const Content& _content);

private:
  Content content; 
  Node* next; /**< Pointeur vers le nœud suivant. */
};


