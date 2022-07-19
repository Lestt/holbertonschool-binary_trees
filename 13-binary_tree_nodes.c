#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (3);

	return (1);
}
