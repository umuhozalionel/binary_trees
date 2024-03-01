#include "binary_trees.h"

/**
 * trees_inorder - File implementation of in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void trees_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		trees_inorder(tree->left, func);
		func(tree->n);
		trees_inorder(tree->right, func);
	}
}
