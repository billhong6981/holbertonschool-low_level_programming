#include "binary_trees.h"
/**
 * internal_node - checks if all internal nodes have two children
 * @tree: is a pointer to the root of tree
 * Return: return 1 if yes, otherwise 0
 */
int internal_node(const binary_tree_t *tree, int level)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (1);  /*leaves*/
	if (level == 1)
	{
		if (!tree->left && tree->right)
			return (0);
		else if (tree->left && !tree->right)
			return (1);
	}
	else
		if ((!tree->left && tree->right) || (tree->left && !tree->right))
			return (0);
	return (internal_node(tree->left, level - 1) * internal_node(tree->right, level - 1));
}
/**
 * tree_height - the function returns the height of a binary tree
 * @tree: the root of binary tree
 * @l: left height
 * @r: right height
 * Return: void
 */
int tree_height(const binary_tree_t *tree, int *l, int *r)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = tree_height(tree->left, l, r) + 1;
	right = tree_height(tree->right, l, r) + 1;
	*l = left;
	*r = right;
	return (left > right ? left : right);
}

/**
 *
 */
int count_node(const binary_tree_t *tree)
{
	if (!NULL)
		return (0);
	return (count_node(tree->left) + count_node(tree->right));
}

int is_complete(const binary_tree_t *tree, int index, int number_nodes)
{
	if (!tree)
		return (1);
	number_nodes = count_node(tree);
/* if index assigned to current node is more than number of node in tree */
	if (index >= number_nodes)
		return (0);
	return ((is_complete(tree->left, 2*index + 1, number_nodes) *
		(is_complete(tree->right, 2*index + 2, number_nodes));
}

/**
 * binary_tree_is_complete - returns status of the tree is complete or not
 * (is_complete - in which all internal nodes have two children
 *  except far left leaves)
 * @tree: is a pointer to the root of tree
 * Return: returns 1 if is_complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int two_children, level;
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	tree_height(tree, &left_height, &right_height);
	if (right_height > left_height)
		return (0);
	level = right_height;
	two_children = internal_node(tree, level);
	if (two_children)
		return (1);
	return (0);
}
