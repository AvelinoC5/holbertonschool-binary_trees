#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Write a function that checks if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 0 if no is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
