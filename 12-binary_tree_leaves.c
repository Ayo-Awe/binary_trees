#include "binary_trees.h"
#include <stdlib.h>

/**
 * node_is_leaf - checks if a node is a leaf node
 * @node: pointer to node to check
 *
 * Return: 1 if node is a leaf otherwise 0
 */
int node_is_leaf(const binary_tree_t *node)
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
 * binary_tree_leaves - counts the number of a leaves in a binary
 * tree
 * @tree: pointer to root node
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	/* NULL node */
	if (!tree)
		return (0);

	/* Node is a leaf node */
	if (node_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
