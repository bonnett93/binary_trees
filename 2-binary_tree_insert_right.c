#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node.
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	else
		new->right = NULL;
	new->parent = parent;
	parent->right = new;
	new->n = value;
	new->left = NULL;
	return (new);
}
