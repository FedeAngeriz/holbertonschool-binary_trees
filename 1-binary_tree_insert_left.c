#include "binary_trees.h"

/**
 * binary_tree_insert_left - agregar un nuevo nodo izquierdo al arbol binario
 * @parent: puntero al nodo padre
 * @value: variable de datos guardados en el nuevo nodo
 * Return: nuevo nodo izquierdo al arbol binario
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		newNodo->left = parent->left;
		parent->left->parent = newNodo;
	}
	parent->left = newNodo;
	return (newNodo);
}
