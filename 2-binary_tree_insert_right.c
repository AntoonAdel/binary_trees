#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: New Node or NULL if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *RightNode = NULL;

	if (!parent)
		return (NULL);

	RightNode = binary_tree_node(parent, value);

	if (!RightNode)
		return (NULL);

	if (parent->right)
	{
		RightNode->right = parent->right;
		RightNode->right->parent = RightNode;
	}

	parent->right = RightNode;

	return (RightNode);
}
