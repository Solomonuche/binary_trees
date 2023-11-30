#include "binary_trees.h"
/**
 * array_to_bst - builds a bst from an array
 * @array: pointer to first element of the array
 * @size: size of the array
 *
 * Return: pointer to root node of created bst
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
