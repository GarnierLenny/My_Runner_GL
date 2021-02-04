/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-lenny.garnier
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef enum game_state_s {
    game_on,
    game_over,
    scoreboard,
} game_state_t;

typedef enum jump_state_s {
    ground,
    upward,
    downward,
} jump_state_t;

typedef enum arrow_state_s {
    hit,
    not_hit,
} arrow_state_t;

typedef struct spr_s {
    sfSprite *spr;
    sfTexture *text;
    sfVector2f pos;
    sfIntRect rect;
} spr_t;

typedef struct background_s {
    spr_t *sixth_layer;
    spr_t *fifth_layer;
    spr_t *fourth_layer;
    spr_t *third_layer;
    spr_t *second_layer;
    spr_t *ground;
} background_t;

typedef struct player_s {
    spr_t *spr;
    jump_state_t jump_state;
    spr_t *health;
    sfText *score;
    int score_del;
    int score_int;
    int health_points;
    int run_count;
    int height_m;
} player_t;

typedef struct arrow_s {
    spr_t *spr;
    int velocity;
    int count;
    arrow_state_t arrow_state;
} arrow_t;

typedef struct game_over_s {
    spr_t *game_over;
    spr_t *retry_button;
    spr_t *scoreboard_button;
    spr_t *exit_button;
} game_over_t;

typedef struct game_s {
    game_over_t *game_over;
    background_t *background;
    player_t *player;
    game_state_t game_state;
    arrow_t *arrow;
    sfText *highscore;
    int highscore_int;
    sfMusic *music;
} game_t;

typedef struct global_s {
    game_t *game;
    sfRenderWindow *window;
} global_t;

#endif /* !STRUCT_H_ */