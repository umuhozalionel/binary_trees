#include "binary_trees.h"

/**
 * custom_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
void custom_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		custom_tree_delete(tree->left);
		custom_tree_delete(tree->right);
		free(tree);
	}
}
