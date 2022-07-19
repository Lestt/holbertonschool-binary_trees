#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int numberOfLeavesInLeft = 0;
	int numberOfLeavesInRight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	numberOfLeavesInLeft = binary_tree_leaves(tree->left);
	numberOfLeavesInRight = binary_tree_leaves(tree->right);

	return (numberOfLeavesInLeft + numberOfLeavesInRight);
}
