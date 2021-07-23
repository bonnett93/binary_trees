#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: node is a pointer to the node to find the sibling.
 * Return: a pointer to the sibling node, NULL if hasn't.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	left = node->parent->left;
	right = node->parent->right;
	if (node == left)
		return (right);
	else
		return (left);
}
