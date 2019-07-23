#include "binary_trees.h"
/**
 * binary_tree_sibling - returns sibling of given node
 * @node: is a pointer to the node
 * Return: returns pointer of sibling, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
