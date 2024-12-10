#include "binary_trees.h"

/**
 * binary_tree_delete - borrar todo el arbol binario
 * @tree: puntero al nodo raiz
 * Return: arbol eliminado
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
