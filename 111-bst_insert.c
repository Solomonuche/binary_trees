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
	bst_t *new_node, *current, *parent;

	new_node = binary_tree_node(NULL, value);
	if (*tree == NULL)
	{
		*tree = new_node;
	}
	else
	{
		current = *tree;
		while (1)
		{
			parent = current;
			if (value < parent->n)
			{
				current = current->left;
				if (current == NULL)
				{
					parent->left = new_node;
					new_node->parent = parent;
					return (new_node);
				}
			}
			else if (value > parent->n)
			{
				current = current->right;
				if (current == NULL)
				{
					parent->right = new_node;
					new_node->parent = parent;
					return (new_node);
				}
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (*tree);
}
