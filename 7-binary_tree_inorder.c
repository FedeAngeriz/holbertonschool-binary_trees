#include "binary_trees.h"
/**
 *  binary_tree_inorder - prints the values in the binary tree in inorder
 *
 * @tree: the root of the binary tree
 *
 * @func: the function to be called on each node
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
