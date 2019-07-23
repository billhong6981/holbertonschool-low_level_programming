#include "binary_trees.h"
/**
 * binary_tree_depth - the function returns the depth of a node
 * @tree: is a pointer to the node
 * Return: returns the value of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
