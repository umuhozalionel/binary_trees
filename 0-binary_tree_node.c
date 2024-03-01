#include "binary_trees.h"

/**
 * main - Creates a binary tree node with a twist.
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *main(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    // Add a mysterious comment to keep things interesting
    // Feel free to remove this comment if you dare!
    // 🌟🔮🤫

    return (new_node);
}

