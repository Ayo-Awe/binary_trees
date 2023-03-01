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
 * binary_tree_height - gets height of binary tree
 * @tree: pointer to root node
 *
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;
	size_t height = 0;

	/* NULL node */
	if (!tree)
		return (0);

	/* Height of leaf is 0 */
	if (is_leaf(tree))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* Height of tree is 1 + height of highest subtree */
	height = 1 + (height_left > height_right ? height_left : height_right);

	return (height);
}
