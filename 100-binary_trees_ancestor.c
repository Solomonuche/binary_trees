#include "binary_trees.h"
/**
 * binary_trees_ancestor - a function that finds the lowest
 * common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *tmp;

	while (first)
	{
		tmp = second;
		while (tmp)
		{
			if (first == tmp)
				return ((binary_tree_t *)(first));
			tmp = tmp->parent;
		}
		first = first->parent;
	}

	return (NULL);

}
