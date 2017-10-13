#ifndef TYPES_H
#define TYPES_H


/* ------- CONSTANTS ------- */
const int DEFAULT_LIFES_UNTIL_DEATH = 5;

/* ------- STRUCTS ------- */
struct Point{
    double x;
    double y;
};

/* ------- ENUMS ------- */
enum Blocktype {
    Ball, Player, Obstacle
};

#endif // TYPES_H
