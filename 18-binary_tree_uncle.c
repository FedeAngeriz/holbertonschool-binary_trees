#include "binary_trees.h"

/**
 * binary_tree_uncle - buscamos si tiene tio
 *
 * @node: puntero a tio
 *
 * Return: si tiene tio, si no NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
