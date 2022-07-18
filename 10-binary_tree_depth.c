#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);

	return (1);
}

size_t binary_tree_depth(const binary_tree_t *tree)
{
  if (tree == NULL || binary_tree_is_root(tree))
    return (0);

  return 1 + binary_tree_depth(tree->parent);
}
