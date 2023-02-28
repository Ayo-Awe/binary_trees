#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes a binary tree given the root node
 * @tree: pointer to root node
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Delete left node */
	binary_tree_delete(tree->left);

	/* Delete right node */
	binary_tree_delete(tree->right);

	/* Free current node */
	free(tree);
}
