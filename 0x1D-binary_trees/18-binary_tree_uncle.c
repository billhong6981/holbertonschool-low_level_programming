#include "binary_trees.h"
/**
 * find_brother - returns brother of given node
 * @node: is a pointer to the node
 * Return: returns pointer of brother, otherwise NULL
 */
binary_tree_t *find_brother(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 * binary_tree_uncle - returns uncle of given node
 * @node: is a pointer to the node
 * Return: returns pointer of uncle, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (find_brother(node->parent));
}
