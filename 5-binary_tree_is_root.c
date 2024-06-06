#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_leaf - create a binary node.
 * Description: A function that creates a new node of type
 *              binary tree and attach it to a parent node.
 * @node: a pointer to a binatr_tree node that serve as a parent.
 *
 * Return: a pointer of type binary_tree on success or null.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}