#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right child of a parent node
 * @parent: pointer to parent node
 * @value: value to be stored in the node
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *old_right_node = NULL;

	/* Null parent node */
	if (!parent)
		return (NULL);

	/* Create new node */
	new_node = binary_tree_node(parent, value);

	/* Error new node wan't created */
	if (!new_node)
		return (NULL);

	/* Set new node to parent right node and old right node to right of new node */
	old_right_node = parent->right;
	parent->right = new_node;
	new_node->right = old_right_node;

	/* Set parent of old left node to new node*/
	if (old_right_node)
		old_right_node->parent = new_node;

	/* Return new node */
	return (new_node);
}
