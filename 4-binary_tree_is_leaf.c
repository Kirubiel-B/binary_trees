#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function checks if a node is a leaf
 * @node: check
 *
 * Return: 1 if is a leaf
 *         0 if is not a leaf
 *         0 if is NULL */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
