#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

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

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree->left == NULL && tree->right == NULL)
    {
        free(tree)
		return (NULL);
    }

    if (tree->left != NULL)
    {
        binary_tree_delete(tree->left)
    }
    if (tree->right == NULL)
    {
        binary_tree_delete(tree->right)
    }
	return
}
