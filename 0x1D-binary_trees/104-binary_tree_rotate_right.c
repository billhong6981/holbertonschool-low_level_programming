#include "binary_trees.h"

/**
 * binary_tree_rotate_right - do the right rotation on binary tree
 * @tree: is a pointer to the root of tree
 * Return: return a pointer to the new root node after rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	if (!tree->left && !tree->right)
		return (tree);
	if (!tree->left)
		return (tree);
	temp = tree->left;
	if (!tree->left->right)
	{
		tree->parent = tree->left;
		tree->left->right = tree;
		tree->left->parent = NULL;
		tree->left = NULL;
	}
	else
	{
		tree->left->right->parent = tree;
		tree->parent = tree->left;
		tree->left->parent = NULL;
		tree->left = tree->left->right;
		temp->right = tree;
	}
	return (temp);
}
