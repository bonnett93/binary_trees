#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary
 * tree
 * @tree: is a pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	while (tree)
	{
		tree = tree->parent;
		n += 1;
	}
	return (n - 1);
}
