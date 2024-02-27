#include "binary_trees.h"


/**
 * binary_tree_node - Entry point
 * @parent: the parent node or root node
 * @value: value the node will take
 * Return: Always node (Success) other ways return NULL
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent)
	{
		if (parent->left && parent->right)
			return (NULL);
	}
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent)
		node->parent = parent;
	else
		node->parent = node;
	return (node);
}
