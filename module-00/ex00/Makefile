# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 11:33:05 by hkong             #+#    #+#              #
#    Updated: 2023/01/20 15:16:16 by hkong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = megaphone.cpp
OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re