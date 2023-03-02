#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - searches for sibling node
 * @tree: pointer to root node
 *
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	/* Return right node, current node is left child of parent */
	if (parent->left == node)
		return (parent->right);

	/* Return left node, current node is right child of parent */
	return (parent->left);
}
