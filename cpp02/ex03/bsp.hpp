/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:15:54 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 22:17:48 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP

#include "Point.hpp"

float	sign(Point p1, Point p2, Point p3);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
