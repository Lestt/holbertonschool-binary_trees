#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child = NULL;

	if (parent == NULL)
		return (NULL);

	new_child = binary_tree_node(parent, value);
	if (new_child == NULL)
		return (NULL);

	new_child->left = parent->left;
	parent->left = new_child;
	if (new_child->left != NULL)
		new_child->left->parent = new_child;

	return (new_child);
}
