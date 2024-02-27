#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: the tree
 * Return: depth other ways 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *node = tree;

	if (!tree)
		return (0);
	while (node->parent)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
