/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:47:16 by lubravo-          #+#    #+#             */
/*   Updated: 2024/05/23 15:35:26 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newnode;
	void	*content;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			free(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, newnode);
		lst = lst -> next;
	}
	return (new);
}

/* int	main(void)
{
	t_list *node1 = ft_lstnew("a");
	t_list *node2 = ft_lstnew("b");
	t_list *node3 = ft_lstnew("c");
	t_list *node4 = ft_lstnew("d");
	t_list *new;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	new = ft_lstmap(node1, &ft_strdup, &free);
	while (new)
	{
		printf("%s\n", new->content);
		new = new->next;
	}
}*/
