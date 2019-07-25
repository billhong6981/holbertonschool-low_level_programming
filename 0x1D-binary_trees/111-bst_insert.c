#include "binary_trees.h"
/**
 * look_up - a function look up the same value in BST
 * @tree: a pointer to root of BST
 * Return: return 1 if found the same value, otherwise 0
 */
int look_up(bst_t *tree, int value)
{
	if (!tree)
		return (0);
	if (value == tree->n)
		return (1);
	if (value < tree->n)
		return (look_up(tree->left, value));
	return (look_up(tree->right, value));
}
/**
 * node_insert - find the propert node to insert
 * @root: the root of BST
 * @value: value given to insert to BST
 * Return: reture the propert node to be insert
 */
bst_t *node_insert(bst_t *root, bst_t *new_node, int value)
{
	if (!root)
		return (new_node);
	if (!root->left || !root->right)
		new_node->parent = root;
	if (value < root->n)
		root->left = node_insert(root->left, new_node, value);
	else if (value > root->n)
		root->right = node_insert(root->right, new_node, value);
	return (root);
}
/**
 * bst_insert - insert the given value to BST
 * @tree: is a double pointer to the root node of the BST
 * @value: value to be add to node
 * Return: return a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *root;

	root = *tree;
	if (look_up(root, value) == 1)
		return (NULL);
	new_node = (bst_t *)binary_tree_node(NULL, value);
	if (!new_node)
		return (NULL);
	if (!tree || !root)
	{
		*tree = new_node;
		return (new_node);
	}
	node_insert(root, new_node, value);
	return (new_node);
}
