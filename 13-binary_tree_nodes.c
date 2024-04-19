#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: *Ptr to the root node of the tree to count the number of nodes
 * Return: Counts of the nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		count += 1;
	else
		count += 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
