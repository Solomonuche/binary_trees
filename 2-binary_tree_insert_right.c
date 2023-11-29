#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node
 * as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 *
 * Return: pointer to struct node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *tmp;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = right_node;
	}
	else
	{
		tmp = parent->right;
		parent->right = right_node;
		right_node->right = tmp;
		tmp->parent = right_node;
	}

	return (right_node);

}
