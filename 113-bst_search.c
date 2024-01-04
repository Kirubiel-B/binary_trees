#include "binary_trees.h"

/**
 * bst_search - find node in a tree
 * @tree: the tre to evaluate
 * @value: find
 * Return: 1 if exit 0 if no
 */
bst_t *bst_search(const bst_t *tree, int value)
{

	if (tree == NULL)
		return (NULL);
	if (value == tree->n)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
	return (NULL);
}
