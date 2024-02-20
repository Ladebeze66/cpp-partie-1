/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:46:29 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/27 21:06:18 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}

/*a) a is 1234.43
a a été initialisé avec la valeur 1234.4321f (un flottant).
Lors de la conversion en virgule fixe, cette valeur est multipliée par 2^8 (256, car 8 bits sont utilisés pour la partie fractionnaire) et arrondie à l'entier le plus proche pour stocker sous forme entière.
Lors de la conversion pour l'affichage (.toFloat() utilisée dans la surcharge de l'opérateur <<), cette valeur entière est divisée par 256 pour la reconvertir en flottant. Le résultat est 1234.43 après l'arrondi pour l'affichage.
b) b is 10
b a été initialisé avec la valeur entière 10.
Comme c'est un entier sans partie fractionnaire, sa représentation à virgule fixe est juste 10 * 256 = 2560. C'est la valeur stockée en interne.
Lors de la conversion pour l'affichage, 2560 est divisé par 256, ce qui redonne 10. Aucun arrondi n'est nécessaire car c'était une valeur entière pour commencer.
c) c is 42.4219
c a été initialisé avec la valeur flottante 42.42f.
Lors de la conversion en virgule fixe, cette valeur est multipliée par 256 et arrondie. Cela peut entraîner une petite imprécision due à l'arrondi.
Lors de la conversion pour l'affichage, cette valeur arrondie est divisée par 256, résultant en 42.4219 après l'arrondi pour l'affichage.
d) d is 10
d est une copie de b, donc il a exactement les mêmes valeurs internes que b.
Ainsi, tout comme b, d affiche 10 lorsqu'il est converti en flottant pour l'affichage.
Conversion en entiers :
Lorsque vous convertissez ces valeurs en entiers (toInt()), la partie fractionnaire est simplement supprimée (en divisant par 256).

a as integer: 1234 provient de 1234.43 avec la partie fractionnaire supprimée.
b as integer: 10 est déjà un entier, donc pas de changement.
c as integer: 42 provient de 42.4219 avec la partie fractionnaire supprimée.
d as integer: Identique à b, donc 10.*/