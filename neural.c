#include <stdio.h>

#define WIDTH 20
#define HEIGHT 20

typedef float Layer[HEIGHT][WIDTH]

float feed_forward(Layer inputs, Layer weights){
    float = 0.0f;

    for (int y = 0; y < HEIGHT; ++y){
        for (int x = 0; x < WIDTH, ++x){
            output += inputs[y][x] * weights[y][x];
        }
    }

    return output;
}

static Layer inputs;
static Layer weights;