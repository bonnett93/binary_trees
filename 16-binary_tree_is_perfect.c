#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect,0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	depth = binary_recursion_depth(tree);
	return (perfect_tree(tree, depth, 0));
}

/**
 * perfect_tree - function that find if a tree is perfect
 * @tree: is a pointer to the node to measure the depth
 * @depth: the depth of the tree
 * @level: The level where is the visit node
 * Return: 1 if conditions of perfect tree are accomplished
 */
int perfect_tree(const binary_tree_t *tree, size_t depth, int level)
{
	if (tree->left == NULL && tree->right == NULL)
	{
		if (level == (int)depth)
			return (1);
		return (0);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (perfect_tree(tree->left, depth, level + 1) == 1 &&
		perfect_tree(tree->right, depth, level + 1) == 1)
		return (1);
	else
		return (0);
}

/**
 * binary_recursion_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_recursion_depth(const binary_tree_t *tree)
{
	if (tree->left)
		return (1 + binary_recursion_depth(tree->left));
	return (0);
}
