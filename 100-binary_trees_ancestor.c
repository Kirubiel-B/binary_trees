#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node in a binary tree.
 *@tree: node to measure the depth.
 * Return: function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
/**
 * binary_trees_ancestor - ancestor of two nodes
 * @first: node first
 * @second: node second
 * Return: low common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t height_f = 0, height_s = 0;
	const binary_tree_t *aux = NULL;

	height_f = binary_tree_depth(first);
	height_s = binary_tree_depth(second);
	if (height_f && height_s)
	{
		if (height_f > height_s)
		{
			aux = first;
			first = second;
			second = aux;
		}
		while (first)
		{
			aux = second;
			while (aux)
			{
				if (first == aux)
					return ((binary_tree_t *)first);
				aux = aux->parent;
			}
			first = first->parent;
		}
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
