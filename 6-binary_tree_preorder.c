#include "binary_trees.h"
/**
 *  binary_tree_preorder - prints a binary tree in preorder
 *
 * @tree: the root of the tree
 *
 * @func: the function to be applied to each node
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
