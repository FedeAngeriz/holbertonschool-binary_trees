#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a binary tree
*
* @tree: a pointer to the root node of the tree to measure the depth of
*
* Return: the depth of the tree, or 0 if the tree is empty
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		deep++;
		tree = tree->parent;
	}

	return (deep);
}
