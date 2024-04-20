#include "binary_trees.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * binary_tree_inorder - To iterate through a 
 * binary tree using in-order traversal
 * @tree: *Ptr to root node of the tree to traverse
 * @func: *Ptr to a function to call for each node
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
