#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node
 * as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 *
 * Return: pointer to struct node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node, *tmp;

	if (parent == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = left_node;
	}
	else
	{
		tmp = parent->left;
		parent->left = left_node;
		left_node->left = tmp;
		tmp->parent = left_node;
	}

	return (left_node);

}
