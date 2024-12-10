#include "binary_trees.h"
/**
* binary_tree_insert_right - Agregar nuevo nodo derecho al árbol binario
* @parent: puntero a nodo padre
* @value: valor a ser guardado en el nuevo nodo
* Return: nuevo nodo derecho en el árbol binario
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

/**
* binary_tree_delete - Borrar todo el árbol binario
* @tree: puntero al nodo raíz
* Return: nada
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
