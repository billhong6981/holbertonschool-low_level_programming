#include "binary_trees.h"
/**
 * binary_tree_nodes - returns the number of nodes with at least one child
 * @tree: is a pointer to the root of tree
 * Return: returns the number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	return (binary_tree_nodes(tree->left) + 1
		+ binary_tree_nodes(tree->right));
}
