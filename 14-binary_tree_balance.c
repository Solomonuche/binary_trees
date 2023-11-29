#include "binary_trees.h"
/**
 * binary_tree_balance - calculates and return the balance of a tree
 * @tree: root node of the tree
 *
 * Return: The binary tree balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height_helper(tree->left) - height_helper(tree->right));
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
