#include "binary_trees.h"
/**
 * binary_tree_height - the function returns the height of a binary tree
 * @tree: the root of binary tree
 * Return: returns the value of height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	return (left_height > right_height ? left_height : right_height);
}
