#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the node will be checked
 * Return: 1 if node is a leaf, otherwise 0
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
