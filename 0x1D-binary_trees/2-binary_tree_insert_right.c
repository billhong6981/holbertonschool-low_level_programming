#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert new node to be right child of parent
 * @parent: parent node need to add child node
 * @value: int value need to add to new node
 * Return: address of new node on success, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (!parent)
		return (NULL);
	right_child = binary_tree_node(parent, value);
	if (!right_child)
		return (NULL);
	if (!parent->right)
	{
		parent->right = right_child;
		return (right_child);
	}
	parent->right->parent = right_child;
	right_child->right = parent->right;
	parent->right = right_child;
	return (right_child);
}
