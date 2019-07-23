#include "binary_trees.h"
/**
 * binary_tree_size - the function returns the size of tree
 * @tree: is a pointer to the root of tree
 * Return: returns the value of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + 1
		+ binary_tree_size(tree->right));
}
