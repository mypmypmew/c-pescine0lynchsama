//header
#include "libft.h"
//#include <stdio.h>

size_t	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int main() {
//     // Create a list with three nodes
//     t_list *first_node = (t_list *)malloc(sizeof(t_list));
//     first_node->content = "First Node";

//     t_list *second_node = (t_list *)malloc(sizeof(t_list));
//     second_node->content = "Second Node";

//     t_list *third_node = (t_list *)malloc(sizeof(t_list));
//     third_node->content = "Third Node";

//     // Connect the nodes
//     first_node->next = second_node;
//     second_node->next = third_node;
//     third_node->next = NULL;

//     // Count the number of nodes in the list
//     int count = ft_lstsize(first_node);
//     printf("Number of nodes in the list: %d\n", count);

//     return 0;
// }