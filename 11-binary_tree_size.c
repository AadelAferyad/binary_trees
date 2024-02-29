#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: the tree
 * Return: depth other ways 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}
