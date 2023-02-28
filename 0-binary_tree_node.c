#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates and adds a node to a parent node
 * @parent: pointer to parent node
 * @value: value to be stored in the node
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Malloc new node */
	new_node = malloc(sizeof(binary_tree_t));

	/* Malloc failure */
	if (!new_node)
		return (NULL);

	/* Initialise new node */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return new node */
	return (new_node);
}
