#include "binary_trees.h"

/**
 * height - function helper finds height
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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 * Return: counts other ways 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	return (left - right);
}
