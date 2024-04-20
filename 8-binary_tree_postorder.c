#include "binary_trees.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * binary_tree_postorder - Iterate through a 
 * binary tree using post-order traversal
 * @tree: *Ptr to root node of tree to traverse
 * @func: *Ptr to a function to call for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
