#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_full_recursive - Function that
 * checks if a binary tree is full
 * @tree: *Ptr to the root node of the tree to check
 * Return: 1 if true
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				is_full_recursive(tree->left) == 0 ||
				is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - check if tree is full
 * @tree: *Ptr to the root node of the tree to check
 * Return: 1 if true
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
