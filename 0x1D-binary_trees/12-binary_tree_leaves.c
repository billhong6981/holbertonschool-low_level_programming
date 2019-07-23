#include "binary_trees.h"
/**
 * binary_tree_leaves - the function returns the number of leaves
 * @tree: is a pointer to the root of tree
 * Return: returns the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
