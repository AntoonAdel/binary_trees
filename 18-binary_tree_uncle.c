#include "binary_trees.h"

/**
 * binary_tree_sibling_uncle - finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 * Return: pointer to the sibling node or NULL.
 */

binary_tree_t *binary_tree_sibling_uncle(binary_tree_t *node)
{
	binary_tree_t *pro = NULL;

	if (!node || !(node->parent))
		return (NULL);

	pro = node->parent;

	if (pro->left && (pro->left != node))
		return (pro->left);

	else if (pro->right && (pro->right != node))
		return (pro->right);

	return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 * Return: pointer to the sibling node or NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	return (binary_tree_sibling_uncle(node->parent));
}
