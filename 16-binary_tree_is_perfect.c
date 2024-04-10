#include "binary_trees.h"

/**
 * depth_left - get the depth for all left nodes.
 * @node: node to check.
 * Return: Depth of node.
 */

int depth_left(const binary_tree_t *node)
{
	int num = 0;

	while (node != NULL)
	{
		num++;
		node = node->left;
	}
	return (num);
}

/**
 * is_perfect_recursive - recursive function to check if.
 * a binary tree is full and has the same level of childs.
 * @node: node to check.
 * @num: depth for left nodes.
 * @level: Initial level compared with depth.
 * Return: 1 if it is perfect, 0 is NULL or isn't perfect.
 */

int is_perfect_recursive(const binary_tree_t *node, int num, int level)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (num == level + 1);

	if (node->left == NULL || node->right == NULL)
		return (0);

	return (is_perfect_recursive(node->left, num, level + 1)
		&& is_perfect_recursive(node->right, num, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: is a pointer to the node node of the tree to check.
 * Return: 0 if it is NULL or if it is imperfect or 1 it is perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nums = depth_left(tree);

	return (is_perfect_recursive(tree, nums, 0));
}
