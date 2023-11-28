#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root.
 * @node: pointer to the node to check.
 * Return: 1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    // Check if the input node is NULL (empty)
	if (node == NULL)
		return (0); // If NULL, it's not a root node by definition

    // Check if the input node has no parent, meaning it's a root node
    if (node->parent == NULL)
		return (1); // Node has no parent, hence it's a root node
    else
		return (0); // Node has a parent, so it's not a root node
}
