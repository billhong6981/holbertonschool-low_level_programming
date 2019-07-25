#include "binary_trees.h"

/**
 * print_t - Stores recursively each level in an array of strings
 *
 * @tree: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 *
 * Return: length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, int **s)
{
	int left, right;

	if (!tree)
		return (0);
	left = print_t(tree->left, offset, depth + 1, s);
	right = print_t(tree->right, offset + 1 + left, depth + 1, s);
	s[depth][offset + right + left] = tree->n;
	printf("s[%d][%d] = %d\n", depth, offset, s[depth][offset]);
	printf("left: %d, right: %d\n", left, right);
	return (left + right);
}

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
 * binary_tree_levelorder - iterates the node in level order
 * @tree: a pointer to the root of tree
 * @func: a pointer to function
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int **array;
	size_t height, i, j;

	if (!tree)
		return;
	height = _height(tree);
	array = malloc(sizeof(int *) * (height + 1));
	if (!array)
		return;
	for (i = 0; i < height + 1; i++)
	{
		array[i] = malloc(sizeof(int) * (1 << i));
		if (!array[i])
			return;
	}
	print_t(tree, 0, 0, array);
	for (i = 0; i < height + 1; i++)
	{
		for (j = 0; j < (size_t)(1 << i); j++)
		{
			func(array[i][j]);
		}
		free(array[i]);
	}
	free(array);
}
