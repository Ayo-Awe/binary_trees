#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
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
	if (binary_tree_is_leaf(tree))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* Height of tree is 1 + height of highest subtree */
	height = 1 + (height_left > height_right ? height_left : height_right);

	return (height);
}
