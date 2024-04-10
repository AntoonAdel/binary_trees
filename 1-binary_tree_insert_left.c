#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: New Node or NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *LeftNode = NULL;

	if (!parent)
		return (NULL);

	LeftNode = binary_tree_node(parent, value);

	if (!LeftNode)
		return (NULL);

	if (parent->left)
	{
		LeftNode->left = parent->left;
		LeftNode->left->parent = LeftNode;
	}

	parent->left = LeftNode;

	return (LeftNode);
}
