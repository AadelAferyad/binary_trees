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

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	if (parent)
		node->parent = parent;
	return (node);
}
