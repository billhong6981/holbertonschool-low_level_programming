#include "binary_trees.h"
/**
 * tree_height - the function returns the height of a binary tree
 * @tree: the root of binary tree
 * Return: tree-height
 */
int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = tree_height(tree->left) + 1;
	right = tree_height(tree->right) + 1;
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

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (left_height - right_height);
}
