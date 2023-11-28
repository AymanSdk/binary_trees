#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left); /* delete left subtree */
		binary_tree_delete(tree->right); /* delete right subtree */
		free(tree); /* delete root */
	}
}
