/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:55:51 by gclement          #+#    #+#             */
/*   Updated: 2022/07/23 23:23:27 by gclement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

    //typedef t_bool int ;
# define EVEN(nbr) (nbr % 2 == 0)
# define FALSE 0
# define TRUE 1
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define SUCCESS 0
#endif
