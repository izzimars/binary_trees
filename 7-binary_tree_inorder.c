#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_inorder - create a binary node.
 * Description: A function that creates a new node of type
 *              binary tree and attach it to a parent node.
 * @tree: a pointer to a binatr_tree node that serve as a parent.
 * @func: a pointer to a binatr_tree node that serve as a parent.
 *
 * Return: a pointer of type binary_tree on success or null.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
