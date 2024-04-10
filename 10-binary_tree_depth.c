#include "binary_trees.h"

/**
 * binary_tree_depth - measures the Depth of a node in a binary tree.
 * @tree: pointer to the node to measure the Depth.
 * Return: Depth or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		Depth = 1 + binary_tree_depth(tree->parent);

	return (Depth);
}
