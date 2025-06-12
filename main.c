#include "libft.h"


int main()
{
	char *str = "node1";
	char *str2 = "node2";
	t_list *t = ft_lstnew(str);
	t_list *t2 = ft_lstnew(str2);
	t_list *t3 = ft_lstnew("node3");
	t_list *t4 = ft_lstnew("node4");
	// ft_lstadd_front(&t, t2);
	//res = ft_split(str, ' ');
	ft_lstadd_front(&t, t2);
	ft_lstadd_front(&t, t3);
	printf("list size |%d|\n", ft_lstsize(t));
	t_list *last = ft_lstlast(t);
	printf("last node |%s|\n",(char *)last->content);
	ft_lstadd_back(&t, t4);
	last = ft_lstlast(t);
	printf("after back insert last node |%s|\n",(char *)last->content);
}