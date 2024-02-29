#include "binary_trees.h"


/**
 * height - Function helper finds height
 * using recursion
 * @tree: the tree
 * Return: height other ways 0
 */

size_t height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: the tree
 * Return: height other ways 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree) - 1);
}
