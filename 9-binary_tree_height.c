#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL)
		return (0);

	if (node->right != NULL)
		return (0);

	return (1);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;
  
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
  
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);

	return (rightHeight + 1);
}
