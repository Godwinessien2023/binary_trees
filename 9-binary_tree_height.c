#include "binary_trees.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * binary_tree_height - Measure height of a binary tree
 * @tree: *Ptr to root node of the tree to measure the height
 * Return: The height of the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	if (l > r)
		return (l);
	else
		return (r);
}
