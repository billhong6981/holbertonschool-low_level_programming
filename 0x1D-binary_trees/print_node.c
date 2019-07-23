#include "binary_trees.h"
/**
 * tree_height - return the height of tree
 * @root: the root of tree
 * Return: the level of tree
 */
int tree_height(binary_tree_t *root)
{
	int left_height, right_height;

	left_height = root->left ? 1 + tree_height(root->left) : 0;
	right_height = root->right ? 1 + tree_height(root->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
/**
 * print_help -  a function store the node value to array
 * @root: the root of tree
 * @offset: offset the position to write the next value in
 * @depth: the depth of node
 * @array: array to write node value
 * Return: return offset position value
 */
int print_help(binary_tree_t *root, int offset, int depth, char **array)
{
	char b[6];
	int width, left, right, is_left, i;

	if (!root)
		return (1);
	is_left = (root->parent && root->parent->left == root);
	width = sprintf(b, "(%03d)", root->n);
	left = print_help(root->left, offset, depth + 1, array);
	right = print_help(root->right, offset + left + width, depth + 1, array);
	for (i = 0; i < width; i++)
	{
		array[depth][offset + left + i] = b[i];
	}
	if (depth && is_left)
	{
		for (i = 0; i < width + right; i++)
			array[depth - 1][offset + left + width / 2 + i] = '-';
		array[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !is_left)
	{
		for (i = 0; i < left + width; i++)
			array[depth - 1][offset - width / 2 + i] = '-';
		array[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}
/**
 * binary_tree_print - a helper function prints the binary tree
 * @root: the root of binary tree
 * Return: void
 */
void binary_tree_print(binary_tree_t *root)
{
	char **array;
	int height, i, j;

	if (!root)
		return;
	height = tree_height(root);
	array = malloc(sizeof(*array) * (height + 1));
	if (!array)
		return;
	for (i = 0; i <= height; i++)
	{
		array[i] = calloc(300, sizeof(char));
		if (!array[i])
			return;
	}
	print_help(root, 0, 0, array);
	for (i = 0; i <= height; i++)
	{
		for (j = 299; j > 1; --j)
		{
			if (array[i][j] != ' ')
				break;
			array[i][j] = '\0';
		}
		printf("%s\n", array[i]);
		free(array[i]);
	}
	free(array);
}
