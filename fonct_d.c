
#include "ft_printf.h"

static void	ft_putspace(t_env *env)
{
	int i;
/*
ft_putstr(">>itok>>");
ft_putnbr(ITOK);
ft_putstr("<<");
ft_putstr(">>nbr>>");
ft_putnbr(NBR);
ft_putstr("<<");
*/
    i = -1;
		NBR = NBR - ft_nbrlen((int)ARG);
		if (FNDFLAGS[3] == 1 && FNDFLAGS[2] )
		NBR = NBR - 1;
/*
        ft_putstr(">>nbr>>");
ft_putnbr(NBR);
ft_putstr("<<");
*/
	while (++i < (NBR))
		 RET = RET + ft_putchar(' ');
	

}

static void	ft_putzero(t_env *env)
{
	int i;

	i = -1;
	while (++i < (NBR - 1))
	 RET = RET + ft_putchar('0');

}

static void	ft_check_env(t_env *env)
{
    if ( (FNDFLAGS[4] == 1 && NBR == -1))
        if ((int)ARG > 0)
            RET = RET + ft_putchar(' ');
	if (NBR != -1)// && ITOK == 12)
	{
		if (FNDFLAGS[1] == 1)
			ft_putzero(env);
		else
			ft_putspace(env);
	}
	//if (NBR != -1 && FNDFLAGS[2] == 1 && ITOK == 12)

}
int     fonct_d(t_env *env)
{
    if(FNDFLAGS[2] != 1)
	    ft_check_env(env);
	if ((FNDFLAGS[3] == 1) && (FNDFLAGS[2] != 1) && ((int)ARG > 0))
    {
       // ft_putstr(">>1IF<<");
	    RET = RET + ft_putchar('+');
    }
       /* if (FNDFLAGS[2] == 1)
        {
        //ft_putstr(">>2IF<<");
		    RET = RET +ft_putchar('-');
        }*/
    RET = RET + ft_putnbr(ARG);
    if(FNDFLAGS[2] == 1)
	    ft_check_env(env);

return (1);
}
