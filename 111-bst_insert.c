#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a biary search tree
 * @tree: double pointer to the root node of BST to insert value
 * @value: value to be inserted
 *
 * Return: pointer to created node or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;

	if (tree == NULL || *tree == NULL)
	{
		new_node = binary_tree_node(NULL, value);
		*tree = new_node;
		return (new_node);
	}
	return (bst_insert_recursion(*tree, value));
}
/**
 * bst_insert_recursion - traverses a tree to find node to insert
 * @tree: pointer to root node
 * @value: value to insert
 *
 * Return: pointer to created node or NULL
 */
bst_t *bst_insert_recursion(bst_t *tree, int value)
{
	bst_t *new;

	if (tree->n > value)
	{
		if (tree->left == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->left = new;
			return (new);
		}
		return (bst_insert_recursion(tree->left, value));
	}
	if (tree->n < value)
	{
		if (tree->right == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->right = new;
			return (new);
		}
		return (bst_insert_recursion(tree->right, value));
	}
	return (NULL);
}
