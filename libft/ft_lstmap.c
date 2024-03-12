//header
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	t_list	*new_node;
	void	*result;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	current = lst;
	while (current != NULL)
	{
		result = f(current->content);
		new_node = ft_lstnew(result);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		current = current->next;
	}
	return (new_list);
}
