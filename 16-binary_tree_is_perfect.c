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
 * binary_tree_count_nodes -  counts all nodes in binary tree
 * @tree: the tree
 * Return: counts other ways 0
 */


int binary_tree_count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_count_nodes(tree->left) +
	binary_tree_count_nodes(tree->right));
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: the tree
 * Return: 1 if full other ways 0
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	return (binary_tree_count_nodes(tree->left) ==
	binary_tree_count_nodes(tree->right) && left == right);
}
