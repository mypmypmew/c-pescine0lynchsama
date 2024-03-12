//header
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	current = *lst;
	if (del != NULL)
	{
		while (current != NULL)
		{
			next_node = current->next;
			del(current->content);
			free(current);
			current = next_node;
		}
		free(lst);
	}
}
