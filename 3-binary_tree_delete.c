#include "binary_trees.h"
/**
 * binary_tree_delete - function deletes an entire binary tree
 * @tree: root node of the tree to delete
 * Description: If is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
