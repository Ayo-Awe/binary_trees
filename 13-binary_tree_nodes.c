#include "binary_trees.h"
#include <stdlib.h>

/**
 * is_leaf_node - checks if a node is a leaf node
 * @node: pointer to node to check
 *
 * Return: 1 if node is a leaf otherwise 0
 */
int is_leaf_node(const binary_tree_t *node)
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
 * binary_tree_nodes - counts the number of nodes with at least
 * one child node
 * @tree: pointer to root node
 *
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	/* NULL node */
	if (!tree)
		return (0);

	/* Node is a leaf node */
	if (is_leaf_node(tree))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
