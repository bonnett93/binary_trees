#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0, else the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		height_l = _binary_tree_height(tree->left) + 1;
	if (tree->right)
		height_r = _binary_tree_height(tree->right) + 1;

	return (height_l - height_r);
}

/**
 * _binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_l = _binary_tree_height(tree->left) + 1;
	else
		height_l = 0;

	if (tree->right)
		height_r = _binary_tree_height(tree->right) + 1;
	else
		height_r = 0;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
