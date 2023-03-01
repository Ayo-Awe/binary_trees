#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - goes through a binary tree using inorder
 * traversal and calls a function on each node
 * @node: pointer to node to check
 *
 * Return: 1 if node is a root otherwise 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	/* Traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* Visit node */
	func(tree->n);

	/* Traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
