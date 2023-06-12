/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:45:24 by hkong             #+#    #+#             */
/*   Updated: 2023/06/12 18:40:38 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <algorithm>
# include <vector>
# include <deque>

std::vector<int> checkInput(int argc, char **argv);
void printVector(std::vector<int> vec);

std::vector<int> fordJohnson(std::vector<int> input);

#endif