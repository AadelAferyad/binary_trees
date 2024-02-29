#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: the tree
 * Return: counts other ways 0
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (left + right + 1);
	return (left + right);
}
