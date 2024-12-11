#include "binary_trees.h"
/**
* binary_tree_leaves - t counts the leves in a binarytree
*
* @tree: pointer to the root of the tree to count the leaves
*
* Return: the number of leaves in the tree, if tree is null return 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL)
	{
		return (1);
	}
	if (tree->right == NULL)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
