//header
#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main()
// {
// 	int *data = (int *)malloc(sizeof(int));
// 	if (data == NULL)
// 	{
// 		perror("Memory allocation failed");
// 		return EXIT_FAILURE;
// 	}
// 	*data = 42;
// 	t_list *node = ft_lstnew(data);

// 	if (node != NULL)
// 	{
// 		printf("Content of the node: %d\n", *((int *)(node->content)));
// 		free(data); // Free allocated memory
// 		free(node); // Free the node
// 	}
// 	else
// 	{
// 		perror("Node creation failed");
// 		return EXIT_FAILURE;
// 	}
// 	return EXIT_SUCCESS;
// }