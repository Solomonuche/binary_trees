#include "binary_trees.h"
/**
 * binary_tree_rotate_left - perfoms left rotation on a tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the root node of rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (tree == NULL)
		return (NULL);
	new_tree = tree->right;
	tree->right = new_tree->left;
	if (new_tree->left != NULL)
		new_tree->left->parent = tree;
	new_tree->left = tree;
	new_tree->parent = tree->parent;
	tree->parent = new_tree;

	return (new_tree);
}
