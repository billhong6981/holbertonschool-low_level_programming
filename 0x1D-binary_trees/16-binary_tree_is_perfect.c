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
 * leaves_same_level - checks all the leaves at the same level
 * @tree: node of the tree
 * @same_level: 1 is same level, otherwise 0
 * Return: height of tree
 */
int leaves_same_level(const binary_tree_t *tree, int *same_level)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = leaves_same_level(tree->left, same_level) + 1;
	right_height = leaves_same_level(tree->right, same_level) + 1;
	*same_level = (left_height == right_height ? 1 : 0);
	return (left_height > right_height ? left_height : right_height);
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
	int two_children, same_level = 0;

	if (!tree)
		return (0);
	two_children = internal_node(tree);
	leaves_same_level(tree, &same_level);
	if (two_children && same_level)
		return (1);
	return (0);
}
