/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-0____reverse_bits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/01/07 23:07:08 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** 

Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Напишите функцию, которая принимает байт, инвертирует его побитово 
(как в примере) и возвращает результат.


Ваша функция должна быть объявлена ​​следующим образом:

unsigned char	reverse_bits(unsigned char octet);


Пример:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

/*
11101010
00000001
*/

unsigned char   reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}

/*

P.S Октет(octet) в информатике — восемь двоичных разрядов(8 бит). В русском языке октет 
обычно называют байтом. Октет может принимать 256 возможных состояний 
(кодов, значений, комбинаций битов (нулей и единиц))

Слово «октет» часто употребляется при описании сетевых протоколов, так как 
они предназначены для взаимодействия компьютеров, имеющих не обязательно 
одинаковую платформу. В отличие от байта, который (в широком смысле) может 
быть равен 10, 12 и т. п. битам, а «октет» всегда равен 8 битам.

*/
