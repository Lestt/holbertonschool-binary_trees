#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
  size_t leftLenght = 0;
  size_t rightLenght = 0;

  if (tree == NULL)
    return (0);

  leftLenght = binary_tree_size(tree->left);
  rightLenght = binary_tree_size(tree->right);

  return (leftLenght + rightLenght + 1);
}
