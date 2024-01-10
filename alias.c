#include "shell.h"

/**
 * history_my - displays the history list, one command by line, preceded
 *              with line numbers, starting at 0.
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: Always 0
 */
int history_my(info_t *info)
{
	print_list(info->history);
	return (0);
}

/**
 * unsetalias - sets alias to string
 * @info: parameter struct
 * @str: the string alias
 *
 * Return: Always 0 on success, 1 on error
 */
int unsetalias(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = strchr(str, '=');
	if (!p)
		return (1);
	c = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias),
		get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
	*p = c;
	return (ret);
}

/**
 * setalias - sets alias to string
 * @info: parameter struct
 * @str: the string alias
 *
 * Return: Always 0 on success, 1 on error
 */
int setalias(info_t *info, char *str)
{
	char *p;

	p = strchr(str, '=');
	if (!p)
		return (1);
	if (!*++p)
		return (unsetalias(info, str));

	unsetalias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

/**
 * printalias - prints an alias string
 * @node: the alias node
 *
 * Return: Always 0 on success, 1 on error
 */
int printalias(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)
	{
		p = strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
			_putchar(*a);
		_putchar('\'');
		_puts(p + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}

/**
 * alias_my - mimics the alias builtin (man alias)
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
int alias_my(info_t *info)
{
	int i = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			printalias(node);
			node = node->next;
		}
		return (0);
	}
	for (i = 1; info->argv[i]; i++)
	{
		p = strchr(info->argv[i], '=');
		if (p)
			setalias(info, info->argv[i]);
		else
			printalias(node_starts_with(info->alias, info->argv[i], '='));
	}

	return (0);
}
