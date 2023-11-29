#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	else
		return (height_helper(tree));
}

size_t height_helper(const binary_tree_t *tree)
{
	size_t ldepth, rdepth;

	if (tree == NULL)
	{
		return (-1);
	}
	else
	{

		ldepth = height_helper(tree->left);
		rdepth = height_helper(tree->right);

		if (ldepth > rdepth)
		{
			return (rdepth + 1);
		}
		else
		{
			return (ldepth + 1);
		}
	}
}
