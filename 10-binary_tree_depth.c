#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to root node
 *
 * Return: depth of node binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* NULL node */
	if (!tree)
		return (0);

	/* Depth of a root node is zero */
	if (tree->parent == NULL)
		return (0);

	/* Depth of a node is 1 + depth of parent node */
	depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
