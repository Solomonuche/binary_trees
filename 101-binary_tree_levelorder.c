#include "binary_trees.h"
/**
 * binary_tree_levelorder - goes through a binary tree using LOT
 * @tree: pointer to the root of tree/ subtree
 * @func: pointer to function that interracts with the data
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (!tree || !func)
		return;
	height = height_helper(tree);

	for (i = 0; i <= height; i++)
		traverse(tree, i, func);
}
/**
 * traverse - helper function for binary_tree_levelorder
 * @tree: pointer to the root of tree/ subtree
 * @level: level of node on tree
 * @func: pointer to function that interracts with the data
 */
void traverse(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 0)
	{
		func(tree->n);
	}
	else
	{
		traverse(tree->left, level - 1, func);
		traverse(tree->right, level - 1, func);
	}
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
