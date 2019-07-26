#include "binary_trees.h"
/**
 * count_node - function that count the nodes in tree
 * @tree: pointer to root of tree
 * Return: number of nodes
 */
int count_node(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (count_node(tree->left) + 1 + count_node(tree->right));
}
/**
 * is_complete - check the tr is complete or not
 * @tree: point to root of tree
 * @index: a given index to the current node
 * @number_nodes: size of tree
 * Return: return 1 if tree is complete, otherwise 0
 */
int is_complete(const binary_tree_t *tree, int index, int number_nodes)
{
	if (!tree)
		return (1);
	if (index >= number_nodes)
		return (0);
	return (is_complete(tree->left, 2 * index + 1, number_nodes) *
		is_complete(tree->right, 2 * index + 2, number_nodes));
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
	int number_nodes;

	if (!tree)
		return (0);
	number_nodes = count_node(tree);
	return (is_complete(tree, 0, number_nodes));
}
