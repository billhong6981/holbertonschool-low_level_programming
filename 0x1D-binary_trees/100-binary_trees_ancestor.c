#include "binary_trees.h"
/**
 * node_depth - the function returns the depth of a node
 * @tree: is a pointer to the node
 * Return: returns the value of depth
 */
size_t node_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);
	depth = node_depth(tree->parent) + 1;
	return (depth);
}
/**
 * binary_trees_ancestor - finds lowest common ancestor of two given node
 * @first: first given node
 * @second: second given node
 * Return: returns ancestor node on success, otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t n1_depth, n2_depth, gap;

	if (!first || !second)
		return (NULL);
	n1_depth = node_depth(first);
	n2_depth = node_depth(second);
	if (n1_depth > n2_depth)
	{
		gap = n1_depth - n2_depth;
		while (gap--)
			first = first->parent;
	}
	else if (n2_depth > n1_depth)
	{
		gap = n2_depth - n1_depth;
		while (gap--)
			second = second->parent;
	}
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
