#include "binary_trees.h"
#include <stdlib.h>

/**
 * node_sibling - searches for sibling node
 * @node: pointer to node
 *
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *node_sibling(binary_tree_t *node)
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

/**
 * binary_tree_uncle - searches for uncle node
 * @node: pointer to node
 *
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	/* Uncle node is sibling node of parent */
	return (node_sibling(node->parent));
}
