#include "binary_trees.h"

/**
 * free_using_recursion - deletes nodes using recursion.
 * @root: pointer to the root of the tree
 */

void free_using_recursion(binary_tree_t *root)
{
	if (!root)
		return;
	free_using_recursion(root->left);
	free_using_recursion(root->right);
	free(root);
}


/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	free_using_recursion(tree);
}
