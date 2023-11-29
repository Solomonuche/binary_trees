#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: Length of node or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height_helper(tree));
}
/**
 * height_helper - a helper function that calculates the height of a tree
 * @tree: pointer to the root node of the tree
 *
 * Return: Length of the tree/ subtree
 */
size_t height_helper(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (-1);
	lh = height_helper(tree->left) + 1;
	rh = height_helper(tree->right) + 1;

	return ((lh > rh) ? lh : rh);
}
