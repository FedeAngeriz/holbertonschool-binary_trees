#include "binary_trees.h"

/**
* binary_tree_insert_right - agregar nuevo nodo derecho al arbol binario
* @parent: puntero a nodo padre
* @value: variable de datos guardados en el nuevo nodo
* Return: nuevo nodo derecho en el arbol binario
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodo = malloc(sizeof(binary_tree_t));

	if (newNodo == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	newNodo->n = value;
	newNodo->parent = parent;
	newNodo->left = NULL;
	newNodo->right = NULL;


	if (parent->right != NULL)
	{
		newNodo->right = parent->right;
		parent->right->parent = newNodo;
	}

	parent->right = newNodo;

	return (newNodo);
}
