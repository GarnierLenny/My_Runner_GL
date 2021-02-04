/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday07-lenny.garnier
** File description:
** my
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window/Event.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <sys/types.h>
#include <fcntl.h>
#include <math.h>
#include <stdarg.h>
#include "struct.h"
#include "define.h"

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
char **str_to_word_array_sep(char *str, char separator);
int my_printf(char const *str, ...);
void print_base_convert(int nb, int base);
void init_window(global_t *g);
void create_sprite(spr_t *spr, char *ressource, sfVector2f pos);
void display_window(global_t *g);
global_t *malloc_global(global_t *g);
sfVector2f v2f(float x, float y);
void init_sprites(global_t *g);
void display_game_on(sfRenderWindow *window, game_t *game);
void display_background(sfRenderWindow *window, background_t *bg);
void initializer(global_t *g);
background_t *malloc_background(background_t *bg);
void init_background(background_t *bg);
void move_sprites(global_t *g);
void clock_r(void);
void set_textures_rect_background(background_t *bg);
sfIntRect rect(int top, int left, int width, int height);
void free_struct(global_t *g);
void free_game(game_t *game);
void free_background(background_t *bg);
void destroy_all(global_t *g);
void destroy_background(background_t *bg);
game_t *malloc_game(game_t *game);
player_t *malloc_player(player_t *player);
void init_player(player_t *player);
void display_player(sfRenderWindow *window, player_t *player);
void destroy_player(player_t *player);
void free_player(player_t *player);
void move_player(player_t *player);
void check_jump(player_t *player);
void jump_up(player_t *player);
void jump_down(player_t *player);
void set_jump_on(player_t *player);
void init_arrow(arrow_t *arrow);
void move_arrow(arrow_t *arrow);
void check_hit(game_t *game);
sfText *create_text(sfText *text, sfColor color, char *str, sfVector2f pos);
char *int_to_str(int nb);
sfText *init_highscore(game_t *game);
int update_highscore(game_t *game);
int usage(int ac, char **av);
int init_audio(game_t *game);
int destroy_music(game_t *game);
void destroy_window(sfRenderWindow *window);
void display_scores(sfRenderWindow *window, game_t *game);
void init_game_over(game_over_t *game_over);
void game_over_set_rect(game_over_t *game_over);
void display_game_over(global_t *g);
void display_game_panel(global_t *g);
void desrtoy_game_over(game_over_t *game_over);
void reset_game(game_t *game);

#endif /* !MY_H_ */
