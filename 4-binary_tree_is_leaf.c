#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - checks if a node is a leaf node
 * @node: pointer to node to check
 *
 * Return: 1 if node is a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left)
		return (0);

	if (node->right)
		return (0);

	return (1);
}
