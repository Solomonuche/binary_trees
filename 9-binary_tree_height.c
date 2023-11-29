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

		ldepth = binary_tree_height(tree->left);
		rdepth = binary_tree_height(tree->right);

		if (ldepth > rdepth)
		{
			return (ldepth + 1);
		}
		else
		{
			return (rdepth + 1);
		}
	}
}
