#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * traversal and calls a function on each node
 * @tree: pointer to root node
 * @func: function pointer
 *
 * Return: 1 if node is a root otherwise 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	/* Traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* Visit node */
	func(tree->n);
}
