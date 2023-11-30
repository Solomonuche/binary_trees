#include "binary_trees.h"
/**
 * binary_tree_rotate_right - perfoms right rotation on a tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the root node of rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (tree == NULL)
		return (NULL);
	new_tree = tree->left;
	tree->left = new_tree->right;
	if (new_tree->right != NULL)
		new_tree->right->parent = tree;
	new_tree->right = tree;
	new_tree->parent = tree->parent;
	tree->parent = new_tree;

	return (new_tree);
}
