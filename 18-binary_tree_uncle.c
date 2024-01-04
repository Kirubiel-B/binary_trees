#include "binary_trees.h"
/**
 * binary_tree_uncle - uncle of a node
 * @node: node to find the uncle
 *
 * Return: uncle node
 *         NULL if is NULL
 *         NULL if is NULL
 *         NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - sibling of a node
 * @node: node to find the sibling
 *
 * Return: sibling node
 *         NULL if is NULL
 *         NULL if is NULL
 *         NULL if no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
