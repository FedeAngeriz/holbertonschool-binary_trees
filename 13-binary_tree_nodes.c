#include "binary_trees.h"
/**
* binary_tree_nodes - it counts the nodes with at least 1 child
*
* @tree: pointer to root node of the tree to count the node
*
* Return: the number of nodes with 1 chil. if tree is null it returns 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	if (tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
