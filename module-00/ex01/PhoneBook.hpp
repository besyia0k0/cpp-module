/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:48:02 by hkong             #+#    #+#             */
/*   Updated: 2023/02/24 16:13:31 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
	private:
	Contact			phone_book_[8];
	static int	phone_book_index_;
	int					get_contact(Contact &contact);
	void				save(Contact &contact);
	int					print_row(int index);
	int					print_list(void);

	public:
	void				get_input(std::string &string);
	int					error(std::string error_msg);
	int					add(void);
	int					search(void);
};

#endif