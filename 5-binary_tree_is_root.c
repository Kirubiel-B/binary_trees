#include "binary_trees.h"
/**
 * binary_tree_is_root - function checks if a node is a root
 * @node: check
 *
 * Return: 1 if is a root
 *         0 if is not a root
 *         0 if is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
