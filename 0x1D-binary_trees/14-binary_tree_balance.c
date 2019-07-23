#include "binary_trees.h"
/**
 * tree_height - the function returns the height of a binary tree
 * @tree: the root of binary tree
 * @l: left height
 * @r: right height
 * Return: void
 */
int tree_height(const binary_tree_t *tree, int *l, int *r)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = tree_height(tree->left, l, r) + 1;
	right = tree_height(tree->right, l, r) + 1;
	*l = left;
	*r = right;
	return (left > right ? left : right);
}

/**
 * binary_tree_balance - returns value of balance factore
 * balance_factore = height(left subtree) - height(right subtree)
 * @tree: is a pointer to the root of tree
 * Return: returns the value of balance factore
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	tree_height(tree, &left_height, &right_height);
	return (left_height - right_height);
}
