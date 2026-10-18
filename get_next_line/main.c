/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:36:08 by wkuay             #+#    #+#             */
/*   Updated: 2026/10/18 17:32:29 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		line_count;

	if (argc < 2)
	{
		// Default behavior: opens a file named "test.txt" in the current directory
        fd = -1;//open("test.txt", O_RDONLY);
        if (fd < 0)
        {
            printf("Error: Could not open default 'test.txt'\n");
            return (1);
        }
        printf("--- Reading from default 'test.txt' ---\n");
    }
    else
    {
        // Custom behavior: opens the file passed as an argument
        fd = open(argv[1], O_RDONLY);
        if (fd < 0)
        {
            printf("Error: Could not open file '%s'\n", argv[1]);
            return (1);
        }
        printf("--- Reading from '%s' ---\n", argv[1]);
    }
    line_count = 1;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("[%d]: %s", line_count, line);
        free(line);
        line_count++;
    }
    close(fd);
    return (0);
}