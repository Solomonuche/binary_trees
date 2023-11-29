#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: root of tree to be checked
 *
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);
	d = height(tree);

	if (is_perfect(tree, d, 0))
		return (1);
	return (0);
}
/**
 * height - calculates the height of a perfect binary tree
 * @tree: pointer to root node of tree
 *
 * Return: height of the binary tree
 */
int height(const binary_tree_t *tree)
{
	int h;

	h = 0;
	while (tree)
	{
		h++;
		tree = tree->left;
	}
	return (h);
}
/**
 * is_perfect - checks if a tree is perfect
 * @tree: pointer to root node of tree
 * @height: height of tree
 * @level: level of node
 *
 * Return: true if perfect else false
 */
bool is_perfect(const binary_tree_t *tree, int height, int level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (height == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (false);
	return (is_perfect(tree->left, height, level + 1) &&
			is_perfect(tree->right, height, level + 1));
}
