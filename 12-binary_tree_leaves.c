#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 *@node: pointer to the node to check.
 * Return: returns 1 if a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_leaves - leaves
 *@tree: root node of the tree to count the number of leaves.
 * Return: If is NULL, function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

}
