#include "binary_trees.h"

/**
 * binary_tree_sibling -  Finds the sibling of a node
 * @node: the sibling node.
 * Return: Always node (Success) other ways return NULL
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->left || !node->parent->right)
		return (NULL);
	return (node == node->parent->left ? node->parent->right :
	node->parent->left);
}
