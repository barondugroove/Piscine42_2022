/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_appel_fonction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alprival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:27:22 by alprival          #+#    #+#             */
/*   Updated: 2022/01/23 20:43:45 by alprival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_un_egal_quatre(char **tab);
void	ft_un_et_deux_egal_trois(char **tab);
void	ft_deux_et_trois_egal_quatre(char **tab);
void	ft_putchar(char c);
void	ft_init_tableau(char **argv, char **tab);
void	ft_init_tableau_deux(char **tab);
void	ft_ecriture_tableau(char **tab);
int		ft_verif_deux(char **argv);
int		ft_verif(int argc, char **argv);
void	ft_putstr(char *str);
void	ft_quatre_egal_all_haut(char **tab);
void	ft_quatre_egal_all_bas(char **tab);
void	ft_quatre_egal_all_gauche(char **tab);
void	ft_quatre_egal_all_droite(char **tab);

void	ft_appel_fonction(char **argv, char **tab)
{
	ft_init_tableau_deux(tab);
	ft_init_tableau(argv, tab);
	ft_deux_et_trois_egal_quatre(tab);
	ft_un_egal_quatre(tab);
	ft_un_et_deux_egal_trois(tab);
	ft_quatre_egal_all_haut(tab);
	ft_quatre_egal_all_bas(tab);
	ft_quatre_egal_all_gauche(tab);
	ft_quatre_egal_all_droite(tab);
	ft_ecriture_tableau(tab);
}
