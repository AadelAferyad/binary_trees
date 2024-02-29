#include "binary_trees.h"

/**
 * binary_tree_is_full -  Checks if a binary tree is full
 * @tree: the tree
 * Return: 1 if full other ways 0
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return ((tree->left && tree->right) && left && right);
}
