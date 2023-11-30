#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid BST
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if its a valid BST else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (is_valid_bst(tree, INT_MIN, INT_MAX))
		return (1);
	return (0);
}
/**
 * is_valid_bst - checks if a tree is a valid bst
 * @tree: pointer to the root node of tree
 * @rangemin: minimum value possible
 * @rangemax: maximum value possible
 *
 * Return: true if valid bst else false
 */
bool is_valid_bst(const binary_tree_t *tree, int rangemin, int rangemax)
{
	bool left, right;

	if (tree == NULL)
		return (true);
	if (tree->n < rangemin || tree->n > rangemax)
		return (false);
	left = is_valid_bst(tree->left, rangemin, tree->n - 1);
	right = is_valid_bst(tree->right, tree->n + 1, rangemax);
	if (left == true && right == true)
		return (true);
	else
		return (false);
}
