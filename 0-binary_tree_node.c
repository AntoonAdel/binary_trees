#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: New Node or NULL if fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = NULL;

	NewNode = malloc(sizeof(binary_tree_t));

	if (!NewNode)
		return (NULL);

	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->n = value;

	return (NewNode);
}