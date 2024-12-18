#include "binary_trees.h"

/**
 * binary_tree_sibling - verificar si los hijos son hermanos
 *
 * @node: Puntero si es hijo derecho o izquierdo
 *
 * Return: Si no tiene hermanos es NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);

}
