#include "binary_trees.h"
/**
 *  binary_tree_postorder - prints a binary tree in postorder
 *
 * @tree: the root of the binary tree
 *
 * @func: the function to call on each node
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
