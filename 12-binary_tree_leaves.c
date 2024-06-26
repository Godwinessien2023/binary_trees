#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: *Ptr to the root node of the tree to count the number of leaves
 * Return: The count of the leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		count += 1;
	else
		count += 0;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
