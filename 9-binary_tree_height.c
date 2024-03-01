#include "binary_trees.h"

/**
 * trees_height - Custom implementation of measuring the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t trees_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		left_height = tree->left ? 1 + trees_height(tree->left) : 0;
		right_height = tree->right ? 1 + trees_height(tree->right) : 0;
		return (left_height > right_height) ? left_height : right_height;
	}
	return (0);
}
