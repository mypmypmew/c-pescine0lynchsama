//header
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
		if (lst->content != NULL && del != NULL)
			del(lst->content);
	free(lst);
}
