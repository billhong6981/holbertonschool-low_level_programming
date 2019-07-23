#include "binary_trees.h"
/**
 * binary_tree_is_root - a function checks if the node is roof
 * @node: the node in binary tree
 * Return: return 1 if the node is root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
