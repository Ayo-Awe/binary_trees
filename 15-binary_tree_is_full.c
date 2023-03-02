#include "binary_trees.h"
#include <stdlib.h>

/**
 * is_leaf - checks if a node is a leaf node
 * @node: pointer to node to check
 *
 * Return: 1 if node is a leaf otherwise 0
 */
int is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left)
		return (0);

	if (node->right)
		return (0);

	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node
 *
 * Return: 1 if tree is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	/* A null node isn't full */
	if (!tree)
		return (0);

	/* A node with 0 children is full i.e leaf node */
	if (is_leaf(tree))
		return (1);

	/* A binary tree is full if all of it's children are full */
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	/* Return 1 if both nodes are full else return 0 */
	return (left && right);
}
