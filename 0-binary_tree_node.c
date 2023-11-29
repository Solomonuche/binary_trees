#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 *
 * Return: pointer to struct node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
