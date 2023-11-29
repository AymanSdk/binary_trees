#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, *func);
		binary_tree_postorder(tree->right, *func);
		func(tree->n);
	}
}
