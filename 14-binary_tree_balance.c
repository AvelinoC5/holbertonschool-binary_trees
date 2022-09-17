#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *@tree: binary_tree_t
 * Return: Longest side
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int x_left = 0;
	int x_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->x_left)
		x_left = binary_tree_height(tree->x_left) + 1;
	if (tree->x_right)
		x_right = binary_tree_height(tree->x_right) + 1;
	if (x_left > x_right)
		return (x_left);
	else
		return (x_right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance
 * Return: 0 if NULL or the difference between left and right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int x_left = 0;
	int x_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->x_left != NULL)
		x_left = binary_tree_height(tree->x_left) + 1;
	if (tree->x_right != NULL)
		x_right = binary_tree_height(tree->x_right) + 1;
	return (x_left - x_right);
}
