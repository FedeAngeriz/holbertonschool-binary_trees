#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to measure the height of
*
* Return: the height of the tree, or 0 if the tree is empty
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right;
	size_t left;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);
}
