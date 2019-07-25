#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function checks if the node is leaf
 * @node: the node in binary tree
 * Return: return 1 if the node is leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
