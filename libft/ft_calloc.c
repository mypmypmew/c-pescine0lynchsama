//header
#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}

// int main() {
//     // Test cases
//     size_t num_elements = 5;
//     size_t element_size = sizeof(int);

//     // Allocate memory using your custom_calloc function
//     int *array = (int *)ft_calloc(num_elements, element_size);

//     // Check if allocation was successful
//     if (array != NULL) {
//         // Print the allocated array
//         printf("Allocated array:\n");
//         for (size_t i = 0; i < num_elements; i++) {
//             printf("%d ", array[i]);
//         }
//         printf("\n");

//         // Free the allocated memory
//         free(array);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
