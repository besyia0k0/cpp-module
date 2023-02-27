/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:04:54 by hkong             #+#    #+#             */
/*   Updated: 2023/02/27 15:55:58 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
	std::ifstream	input;
	std::ofstream	output;
	std::string		str;
	std::string		from;
	std::string		to;
	

	/* 인자 예외처리 */
	if (argc != 4) {
		std::cout << "Error: input should be three arguments; <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	/* 파일 열기/예외처리 */
	input.open(argv[1]);
	if (input.fail()) {
		std::cout << "Error: input file open failed; invalid file" << std::endl;
		return 1;
	}
	output.open(std::string(argv[1]) + ".replace");
	if (output.fail()) {
		std::cout << "Error: cannot create/open output file" << std::endl;
		input.close();
		return 1;
	}

	/* 파일에서 읽어온 문자열 치환 */
	from = std::string(argv[2]);
	to = std::string(argv[3]);
	while (std::getline(input, str)) {
		std::string::size_type	replace_idx = str.find(from);
		
		while (replace_idx != std::string::npos) {
			str.erase(replace_idx, from.length());
			str.insert(replace_idx, to);
			replace_idx = str.find(from, replace_idx);
		}
		output << str;
		if (!input.eof())
			output << std::endl;
	}
	if (input.fail() && !input.eof())	{
		std::cout << "Error occured while readling file." << std::endl;
		input.close();
		output.close();
		return 1;
	}
	input.close();
	output.close();
	return 0;
}