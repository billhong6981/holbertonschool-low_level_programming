#include "binary_trees.h"
/**
 * binary_tree_preorder - iterates the nodes in preorder.
 * @tree: the root of binary tree
 * @func: a pointer points to function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
