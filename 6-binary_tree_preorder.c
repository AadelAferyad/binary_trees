#include "binary_trees.h"

/**
 * pre_order - function helper pre-order traversal
 * using recursion
 * @root: the node of the tree
 * @func: pointer to function that take integer as argument
 */

void pre_order(const binary_tree_t *root, void (*func)(int))
{
	if (!root)
		return;
	func(root->n);
	pre_order(root->left, func);
	pre_order(root->right, func);
}

/**
 * binary_tree_preorder - function that goes through a
 * binary tree using pre-order traversal
 * using recursion
 * @tree: the tree it self
 * @func: pointer to function that take integer as argument
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	pre_order(tree, func);
}
