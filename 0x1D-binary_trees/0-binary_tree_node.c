#include "binary_trees.h"
/**
 * make_newnode - a helper function malloc a new node
 * @val: a integer number add to new node
 * Return: returns a new node address
 */
binary_tree_t *make_newnode(int val)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = val;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

/**
 * binary_tree_node - a function adds new node
 * @parent: a node need to add a child node to it
 * @value: a integer number
 * Return: return a new node address on sucess, otherwise NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = make_newnode(value);
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	return (new_node);
}
