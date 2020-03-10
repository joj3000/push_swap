# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jerbs <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 14:51:40 by jerbs             #+#    #+#              #
#    Updated: 2020/03/09 19:33:54 by jerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
CHK = checker
PS = push_swap
SRC_C = ./src_chk
SRC_P = ./src_ps

O_CHECK = o_chk
O_PSW = o_ps

.O = *.o

all: $(CHK) $(PS)

$(CHK):
	gcc -I$(SRC_C) $(FLAGS) -c $(SRC_C)/*.c
	gcc -o $(CHK) *.o
	mkdir -p $(O_CHECK)
	@mv $(.O) $(O_CHECK)

$(PS):
	gcc -I$(SRC_P) $(FLAGS) -c $(SRC_P)/*.c
	gcc -o $(PS) *.o
	mkdir -p $(O_PSW)
	@mv $(.O) $(O_PSW)

clean:
	rm -rf $(O_PSW)
	rm -rf $(O_CHECK)

fclean:	clean
	rm -rf $(CHK)
	rm -rf $(PS)

re:	fclean all

.PHONY: clean fclean re all
