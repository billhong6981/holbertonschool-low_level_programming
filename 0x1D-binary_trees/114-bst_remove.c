#include "binary_trees.h"

/**
 * bst_search - remove a node in a Binary Search Tree
 * @tree: a pointer to root of tree
 * @value: value to be searched
 * Return: return the found node, otherwise NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
/**
 * _two_children - swap two node
 * @root: a pointer to root of tree
 * @del_node: the node to be removed
 * Return: return the replace node
 */
bst_t *_two_children(bst_t *root, bst_t *del_node)
{
	bst_t *right_node;

	if (!root || !del_node)
		return (NULL);
	right_node = del_node->right;
	while (right_node->left)
		right_node = right_node->left;
	if (!right_node->left && !right_node->right)
		right_node->parent->left = NULL;
	if (!right_node->left && right_node->right)
		right_node->parent->left = right_node->right;
	right_node->parent = del_node->parent;
	right_node->left = del_node->left;
	right_node->right = del_node->right;
	right_node->right->parent = right_node;
	right_node->left->parent = right_node;
	if (right_node->parent)
	{
		if (right_node->parent->left == del_node)
			right_node->parent->left = right_node;
		if (right_node->parent->right == del_node)
			right_node->parent->right = right_node;
	}
	else
		root = right_node;
	free(del_node);
	return (root);
}
/**
 * _is_right - wiring when delete node only has right child
 * @root: pointer to root of BST
 * @del_node: a node need to delete
 * Return: returns the new root of BST
 */
bst_t *_is_right(bst_t *root, bst_t *del_node)
{
	if (!root || !del_node)
		return (NULL);
	if (root == del_node)
	{
		root = del_node->right;
		del_node->right->parent = NULL;
		free(del_node);
		return (root);
	}
	if (del_node->parent->left == del_node)
		del_node->parent->left = del_node->right;
	if (del_node->parent->right == del_node)
		del_node->parent->right = del_node->right;
	del_node->right->parent = del_node->parent;
	free(del_node);
	return (root);
}
/**
 * _is_left - wiring when delete node only has left child
 * @root: pointer to root of BST
 * @del_node: a node need to delete
 * Return: returns the new root of BST
 */
bst_t *_is_left(bst_t *root, bst_t *del_node)
{
	if (!root || !del_node)
		return (NULL);
	if (root == del_node)
	{
		root = del_node->left;
		del_node->left->parent = NULL;
		free(del_node);
		return (root);
	}
	if (del_node->parent->left == del_node)
		del_node->parent->left = del_node->left;
	if (del_node->parent->right == del_node)
		del_node->parent->right = del_node->left;
	del_node->left->parent = del_node->parent;
	free(del_node);
	return (root);
}

/**
 * bst_remove - remove a node in a Binary Search Tree
 * @root: a pointer to root of tree
 * @value: value to be removed
 * Return: return the found node, otherwise NULL
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *del_node;

	if (!root)
		return (NULL);
	del_node = bst_search(root, value);
	if (!del_node)
		return (NULL);
	if (!del_node->left && !del_node->right)
	{
		if (root == del_node)
		{
			free(del_node);
			return (NULL);
		}
		if (del_node->parent->left == del_node)
			del_node->parent->left = NULL;
		if (del_node->parent && (del_node->parent->right == del_node))
			del_node->parent->right = NULL;
		free(del_node);
		return (root);
	}
	if (!del_node->left)
		return (_is_right(root, del_node));
	if (!del_node->right)
		return (_is_left(root, del_node));
	return (_two_children(root, del_node));
}
