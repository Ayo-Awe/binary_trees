#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node
 *
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	/* NULL node */
	if (!tree)
		return (0);

	/*
	 * The size of a binary tree is the sum of the sizes of its children nodes
	 * plus 1 to account for the node itself
	 */

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
