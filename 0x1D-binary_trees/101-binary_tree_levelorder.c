#include "binary_trees.h"

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
/**
 * print_Given_Level - prints level order
 * @root: a pointer to root of tree
 * @level: level of tree
 * @func: point to function
 * Return: void
 */

void print_Given_Level(const binary_tree_t *root, int level, void (*func)(int))
{
	if (root == NULL)
		return;
	if (level == 1)
		func(root->n);
	else if (level > 1)
	{
		print_Given_Level(root->left, level - 1, func);
		print_Given_Level(root->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - iterates the node in level order
 * @tree: a pointer to the root of tree
 * @func: a pointer to function
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = _height(tree);
	int i;

	if (!tree)
		return;
	for (i = 1; i <= h + 1; i++)
		print_Given_Level(tree, i, func);
}
