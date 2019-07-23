#include "binary_trees.h"
/**
 * binary_tree_delete - a function deletes the tree and free memories
 * @tree: the root node of binary tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
