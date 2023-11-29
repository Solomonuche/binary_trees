#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: Number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (leaves_helper(tree));
}
/**
 * leaves_helper - a helper function that counts the number of leaves
 * @tree: pointer to the root node of the tree
 *
 * Return: Number of leaves
 */
size_t leaves_helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (leaves_helper(tree->left) + leaves_helper(tree->right));
}
