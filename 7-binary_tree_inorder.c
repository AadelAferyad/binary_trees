#include "binary_trees.h"

/**
 * in_order - function helper in_order traversal
 * using recursion
 * @root: the node of the tree
 * @func: pointer to function that take integer as argument
 */

void in_order(const binary_tree_t *root, void (*func)(int))
{
	if (!root)
		return;
	in_order(root->left, func);
	func(root->n);
	in_order(root->right, func);
}

/**
 * binary_tree_inorder - function that goes through a
 * binary tree using  in-order traversal
 * @tree: the tree it self
 * @func: pointer to function that take integer as argument
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	in_order(tree, func);
}
