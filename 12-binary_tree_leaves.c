#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the tree
 * Return: depth other ways 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (binary_tree_is_leaf(tree) ? left + right + 1 : left + right);
}
