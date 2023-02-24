/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:48:02 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 18:39:58 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <sstream>

class PhoneBook
{
	private:
		Contact	phone_book_[8];
		int			count_;
		int			index_;
		int			get_contact(Contact &contact);
		void		save(Contact &contact);
		int			print_row(int index);
		int			print_list(void);

	public:
		PhoneBook(void);
		void		get_input(std::string &string);
		int			error(std::string error_msg);
		int			add(void);
		int			search(void);
};

#endif