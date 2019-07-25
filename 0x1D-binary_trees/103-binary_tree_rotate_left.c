#include "binary_trees.h"

/**
 * binary_tree_rotate_left - do the left rotation on binary tree
 * @tree: is a pointer to the root of tree
 * Return: return a pointer to the new root node after rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	if (!tree->left && !tree->right)
		return (tree);
	if (!tree->right)
		return (tree);
	temp = tree->right;
	if (!tree->right->left)
	{
		tree->parent = tree->right;
		tree->right->left = tree;
		tree->right->parent = NULL;
		tree->right = NULL;
	}
	else
	{
		tree->right->left->parent = tree;
		tree->parent = tree->right;
		tree->right->parent = NULL;
		tree->right = tree->right->left;
		temp->left = tree;
	}
	return (temp);
}
