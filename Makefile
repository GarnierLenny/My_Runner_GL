##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

SRC		=	src/utility/create_sprite.c\
			src/utility/vector_2f.c\
			src/utility/clock.c\
			src/utility/set_rect.c\
			src/utility/create_text.c\
			src/utility/int_to_str.c\
			src/utility/usage.c\
			src/audio/init_audio.c\
			src/initialize/init_highscore.c\
			src/initialize/malloc/malloc_global.c\
			src/initialize/malloc/malloc_background.c\
			src/initialize/malloc/malloc_game.c\
			src/initialize/malloc/malloc_player.c\
			src/initialize/window/init_window.c\
			src/initialize/sprites/init_sprites.c\
			src/initialize/sprites/init_player.c\
			src/initialize/sprites/init_background.c\
			src/initialize/sprites/init_game_over.c\
			src/initialize/initializer.c\
			src/initialize/sprites/init_arrow.c\
			src/display/window/display_window.c\
			src/display/window/display_game_panel.c\
			src/display/game_on/display_game_on.c\
			src/display/game_on/display_background.c\
			src/display/game_on/display_player.c\
			src/display/game_on/check_hit.c\
			src/display/game_over/display_game_over.c\
			src/display/game_over/reset_game.c\
			src/move_sprites/move_sprites.c\
			src/move_sprites/move_player.c\
			src/move_sprites/jump_player.c\
			src/move_sprites/move_arrow.c\
			src/free/free/free_struct.c\
			src/free/free/free_game.c\
			src/free/free/free_player.c\
			src/free/free/free_background.c\
			src/free/destroy/destroy.c\
			src/free/destroy/destroy_player.c\
			src/free/destroy/destroy_background.c\
			src/free/destroy/destroy_music.c\
			src/free/destroy/destroy_window.c\
			src/free/destroy/destroy_game_over.c\
			src/score/update_highscore.c\

SRC_M	=	src/main.c

SRC_UT	=	tests/*.c

OBJ		=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

INCLUDE	=	-I./include -I../include

NAME	=	my_runner

NAME_UT	=	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window -g -lm

CFLAGS_UT	=	-lcriterion --coverage -lgcov

LIB		=	-L lib/ -lmy

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ_M) $(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(OBJ_M) $(INCLUDE) $(CFLAGS) $(LIB)

tests_run:	$(OBJ) $(OBJ_UT)
		make -C lib/my/
		gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT) $(LIB)
		./$(NAME_UT)
		gcovr -e tests

clean:
		$(RM) $(OBJ) $(OBJ_M) lib/my/*.o lib/libmy.a lib/my/libmy.a *gcno *gcda *~

fclean:		clean fclean_ut
		$(RM) $(NAME) tests/*.o

fclean_ut: clean
		$(RM) $(NAME_UT)

re:		fclean all