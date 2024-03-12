//header
#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL && lst != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int main()
// {
//     t_list *list = NULL;

//     // Add node with content 42 to the front
//     ft_lstadd_front(&list, &(t_list){.content = (int[]){42}});

//     // Add node with content 21 to the front
//     ft_lstadd_front(&list, &(t_list){.content = (int[]){21}});

//     // Traverse the list and print content
//     for (t_list *current = list; current != NULL; current = current->next)
//         printf("%d -> ", *((int *)(current->content)));
//     printf("NULL\n");

//     return EXIT_SUCCESS;
// }