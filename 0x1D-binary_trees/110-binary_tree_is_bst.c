#include "binary_trees.h"

/**
 * look_up_left - a helper function to checks the parent value and child value
 * @tree: is a pointer to the root of tree
 * @value: a value to be look up
 * Return: return 1 if valid binary search tree
 */
int look_up_left(const binary_tree_t *tree, int value)
{
	if (!tree)
		return (1);
	if (value < tree->n)
		return (0);
	return (look_up_left(tree->left, value) *
		look_up_left(tree->right, value));
}
/**
 * look_up_right - a helper function to checks the parent value and child value
 * @tree: is a pointer to the root of tree
 * @value: a value to be look up
 * Return: return 1 if valid binary search tree
 */
int look_up_right(const binary_tree_t *tree, int value)
{
	if (!tree)
		return (1);
	if (value > tree->n)
		return (0);
	return (look_up_right(tree->left, value) *
		look_up_right(tree->right, value));
}
/**
 * binary_tree_is_bst - checks whether binary tree is search binary tree
 * @tree: is a pointer to the root of tree
 * Return: return 1 if yes, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left && tree->right)
		return (look_up_right(tree->right, tree->n));
	if (!tree->right && tree->left)
		return (look_up_left(tree->left, tree->n));
	if (tree->left && tree->right)
		return (look_up_left(tree->left, tree->n) *
			look_up_right(tree->right, tree->n));
	return (binary_tree_is_bst(tree->left) *
		binary_tree_is_bst(tree->right));
}
