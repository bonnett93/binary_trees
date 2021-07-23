#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle.
 * Return:a pointer to the uncle node NULL if hasn't.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling_uncle(node->parent));
}

/**
 * binary_tree_sibling_uncle - finds the sibling of a node.
 * @node: node is a pointer to the node to find the sibling.
 * Return: a pointer to the sibling node, NULL if hasn't.
 */
binary_tree_t *binary_tree_sibling_uncle(binary_tree_t *node)
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
