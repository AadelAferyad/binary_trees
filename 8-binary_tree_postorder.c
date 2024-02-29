#include "binary_trees.h"

/**
 * post_order - Function helper post-order traversal
 * using recursion
 * @root: the node of the tree
 * @func: pointer to function that take integer as argument
 */

void post_order(const binary_tree_t *root, void (*func)(int))
{
	if (!root)
		return;
	post_order(root->left, func);
	post_order(root->right, func);
	func(root->n);
}

/**
 * binary_tree_postorder - function that goes through a
 * binary tree using post-order traversal using recursion
 * @tree: the tree it self
 * @func: pointer to function that take integer as argument
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	post_order(tree, func);
}
