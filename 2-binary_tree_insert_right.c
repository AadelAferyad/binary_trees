#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another node.
 * @parent: the parent node or root node
 * @value: value the node will take
 * Return: Always node (Success) other ways return NULL
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}

