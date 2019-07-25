#include "binary_trees.h"
/**
 * internal_node - checks if all internal nodes have two children
 * @tree: is a pointer to the root of tree
 * Return: return 1 if yes, otherwise 0
 */
int internal_node(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (1);  /*leaves*/
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	return (internal_node(tree->left) * internal_node(tree->right));
}

/**
 * leaves_height_top - checks all the leaves at the same level
 * @tree: node of the tree
 * Return: height of tree
 */
int leaves_height_top(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = leaves_height_top(tree->left) + 1;
	right_height = leaves_height_top(tree->right) + 1;
	return (left_height > right_height ? left_height : right_height);
}
/**
 * leaves_height_low - checks all the leaves at the same level
 * @tree: node of the tree
 * Return: height of tree
 */
int leaves_height_low(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = leaves_height_low(tree->left) + 1;
	right_height = leaves_height_low(tree->right) + 1;
	return (left_height > right_height ? right_height : left_height);
}

/**
 * binary_tree_is_perfect - returns status of the tree is perfect or not
 * (is_perfect - in which all internal nodes have two children
 *  and all leaves at same level)
 * @tree: is a pointer to the root of tree
 * Return: returns 1 if is_perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int two_children, level_top, level_low;

	if (!tree)
		return (0);
	level_top = leaves_height_top(tree);
	level_low = leaves_height_low(tree);
	if (level_top != level_low)
		return (0);
	two_children = internal_node(tree);
	if (two_children)
		return (1);
	return (0);
}
