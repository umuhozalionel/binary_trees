#include "binary_trees.h"

/**
 * custom_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void custom_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	custom_tree_inorder(tree->left, func);
	func(tree->n);
	custom_tree_inorder(tree->right, func);
}
