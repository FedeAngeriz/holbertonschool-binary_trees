#include "binary_trees.h"
/**
* binary_tree_is_perfect - checks if a binary tree is perfect
*
* @tree: a pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t altura;
	size_t nodes;
	size_t expec_nodes;

	if (tree == NULL)
	return (0);

	altura = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	expec_nodes = (1 << (altura + 1)) - 1;

	return (nodes == expec_nodes);

}
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
/**
* binary_tree_size - it measures the size of a binary tree
*
* @tree: a pointer to the root node fo the tree to measure the size
*
* Return: the size fo the reee if tree is null, return 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
