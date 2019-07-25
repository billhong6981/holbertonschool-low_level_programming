#include "binary_trees.h"
/**
 * binary_tree_is_full - returns status of the tree is full or not
 * (is_full - in which all nodes except leaves have two children)
 * @tree: is a pointer to the root of tree
 * Return: returns 1 if is_full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);  /*leaves*/
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	return (binary_tree_is_full(tree->left) *
		binary_tree_is_full(tree->right));
}
