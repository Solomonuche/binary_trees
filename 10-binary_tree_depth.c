#include "binary_trees.h"
/**
 * binary_tree_depth - calculates and returns the depth of a node
 * @tree: pointer to tree node
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
