#include "binary_trees.h"
/**
 * bst_search - searches for a value in a BST
 * @tree: pointer to root node of BST
 * @value: value to insert to BST
 *
 * Return: pointer to node if found or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *current;

	if (tree == NULL)
		return (NULL);
	current = (bst_t *)tree;
	while (current)
	{
		if (value < current->n)
			current = current->left;
		else if (value > current->n)
			current = current->right;
		else
			return (current);
	}
	return (NULL);
}
