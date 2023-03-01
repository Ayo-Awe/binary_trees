#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * traversal and calls a function on each node
 * @tree: root node
 * @func: function pointer
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	/* Visit node */
	func(tree->n);

	/* Traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
