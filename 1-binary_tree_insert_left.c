#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node as the left child of a parent node
 * @parent: pointer to parent node
 * @value: value to be stored in the node
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *old_left_node = NULL;

	/* Null parent node */
	if (!parent)
		return (NULL);

	/* Create new node */
	new_node = binary_tree_node(parent, value);

	/* Error new node wan't created */
	if (!new_node)
		return (NULL);

	/* Set new node to parent left node and old left node to left of new node */
	old_left_node = parent->left;
	parent->left = new_node;
	new_node->left = old_left_node;

	/* Set parent of old left node to new node*/
	if (old_left_node)
		old_left_node->parent = new_node;

	/* Return new node */
	return (new_node);
}
