#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - goes through a binary tree using inorder
 * traversal and calls a function on each node
 * @tree: root node
 * @func: function pointer
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	/* Traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* Visit node */
	func(tree->n);

	/* Traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
