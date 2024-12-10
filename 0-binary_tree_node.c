#include "binary_trees.h"

/**
 * binary_tree_node - crear nodo de arbol binario
 * @parent: puntero a nodo padre
 * @value: variable de datos guardados en el nuevo nodo
 * Return: nuevo nodo de arbol binario
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodo = malloc(sizeof(binary_tree_t));

	if (newNodo == NULL)
		return (NULL);

	newNodo->n = value;
	newNodo->parent = parent;
	newNodo->left = NULL;
	newNodo->right = NULL;

	return (newNodo);
}
