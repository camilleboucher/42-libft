/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Camille <private_mail>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:14:22 by Camille           #+#    #+#             */
/*   Updated: 2025/12/22 15:47:01 by Camille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <unistd.h>
# include "ft_printf.h"

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putnbr_i_fd(int n, int fd);
int		ft_putnbr_ui_fd(unsigned int n, int fd);
int		ft_putnbr_base_ui_fd(unsigned int n, char *base,
			unsigned int base_size, int fd);
int		ft_putnbr_base_ul_fd(size_t n, char *base, size_t base_size, int fd);

#endif
