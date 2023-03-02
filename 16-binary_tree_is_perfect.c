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
 * tree_height - gets height of binary tree
 * @tree: pointer to root node
 *
 * Return: height of binary tree
 */
size_t tree_height(const binary_tree_t *tree)
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

	height_left = tree_height(tree->left);
	height_right = tree_height(tree->right);

	/* Height of tree is 1 + height of highest subtree */
	height = 1 + (height_left > height_right ? height_left : height_right);

	return (height);
}

/**
 * number_of_nodes - counts nodes in a binary tree
 * @tree: pointer to root node
 *
 * Return: number of nodes of binary tree
 */
size_t number_of_nodes(const binary_tree_t *tree)
{
	size_t left_count = 0;
	size_t right_count = 0;

	/* NULL node */
	if (!tree)
		return (0);

	left_count = number_of_nodes(tree->left);
	right_count = number_of_nodes(tree->right);

	return (1 + right_count + left_count);
}

/**
 * power - raises base to the power of exponent
 * @base: base number
 * @exponent: exponent
 *
 * Return: base to the power of exponent
 */
int power(int base, int exponent)
{
	if (exponent == 0)
		return (1);

	return (power(base, exponent - 1) * base);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 *
 * Return: 1 if tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int expected, actual;

	/* A null node isn't perfect */
	if (!tree)
		return (0);

	/* Total number of nodes in a binary tree of height h is 2^(h+1) - 1*/
	expected = power(2, tree_height(tree) + 1) - 1;
	actual = number_of_nodes(tree);

	return (expected == actual);
}
