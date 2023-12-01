#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: pointer to tree node
 *
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *root;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	root = node->parent;

	if (root->left && root->left != node)
		return (root->left);
	else if (root->right && root->right != node)
		return (root->right);

	return (NULL);
}
