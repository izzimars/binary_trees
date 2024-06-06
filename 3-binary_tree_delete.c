#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_delete - create a binary node.
 * Description: A function that creates a new node of type
 *              binary tree and attach it to a parent node.
 * @tree: a pointer to a binatr_tree node that serve as a parent.
 *
 * Return: a pointer of type binary_tree on success or null.
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
