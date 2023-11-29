#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{

		if (node->parent == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	return (0);

}
