#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - create a binary node.
 * Description: A function that creates a new node of type
 *              binary tree and attach it to a parent node.
 *
 * @parent: a pointer to a binatr_tree node that serve as a parent.
 * @value: the value to be inputed into the created node.
 *
 * Return: a pointer of type binary_tree on success or null.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *left;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL || parent == NULL)
		return (NULL);
	temp->n = value;
	temp->parent = parent;
	temp->right = NULL;
	if (parent->left == NULL)
	{
		temp->left = NULL;
		parent->left = temp;
		return (temp);
	}
	left = parent->left;
	parent->left = temp;
	temp->left = left;
	return (temp);
}
