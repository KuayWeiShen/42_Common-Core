#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *current;
    t_list  *new_content;
    t_list  *new_lst;

    if (lst == NULL || f == NULL || del == NULL)
        return (NULL);
    current = lst;
    new_lst = NULL;
    while (current != NULL)
    {
        void *content = f(current->content);
        new_content = ft_lstnew(content);
        if (new_content == NULL)
        {
                del(content);
                ft_lstclear(&new_lst);
                return (NULL);
        }
        ft_lstadd_back(&new_lst, new_content);
        current = current->next;
    }
    return (new_lst);
}