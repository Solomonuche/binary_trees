#include "binary_trees.h"
/**
 * binary_tree_is_full - a function that
 * @tree: pointer to tree node
 *
 * Return: return 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isFullTree_helper(tree));
}

/**
 * isFullTree_helper - This function tests if a binary tree
 * is a full binary tree.
 * @tree: pointer to tree node
 *
 * Return: return 1 if node is a leaf, otherwise 0
 */

int isFullTree_helper(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = isFullTree_helper(tree->left);
	right = isFullTree_helper(tree->right);

	if ((tree->left && tree->right) ||
			(tree->left == NULL && tree->right == NULL))
	{
		return (left && right);
	}

	return (0);
}
