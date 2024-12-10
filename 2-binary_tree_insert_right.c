#include "binary_trees.h"
/**
* binary_tree_insert_right - agregar nuevo nodo derecho al árbol binario
* @parent: puntero al nodo padre
* @value: valor a ser guardado en el nuevo nodo
* Return: nuevo nodo derecho en el árbol binario
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodo = malloc(sizeof(binary_tree_t));

	if (newNodo == NULL || parent == NULL)
		return (NULL);

	newNodo->n = value;
	newNodo->parent = parent;
	newNodo->left = NULL;
	newNodo->right = NULL;

	if (parent->right != NULL)
	{
		binary_tree_t *old_right = parent->right;


		newNodo->right = old_right;
		old_right->parent = newNodo;
	}

	parent->right = newNodo;

	return (newNodo);
}
