#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_balance - A function to balance binary tree
 * @tree: *Ptr to root node of the tree to measure balance factor
 * Return: 1 on success
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - the height of the binary three
 * @tree: *Ptr to the root node of the tree to measure the balance factor
 * Return: 1 on success
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t m = 0, n = 0;

		m = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		n = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((m > n) ? m : n);
	}
	return (0);
}
