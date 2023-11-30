#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to tree node
 *
 * Return: size of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		count++;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}

	return (count);
}
