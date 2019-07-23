#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert new node to be left child of parent
 * @parent: parent node need to add child node
 * @value: int value need to add to new node
 * Return: address of new node on success, otherwise NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (!parent)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (!left_child)
		return (NULL);
	if (!parent->left)
	{
		parent->left = left_child;
		return (left_child);
	}
	parent->left->parent = left_child;
	left_child->left = parent->left;
	parent->left = left_child;
	return (left_child);
}
