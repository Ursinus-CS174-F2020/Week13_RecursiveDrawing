#include <stdio.h>
#include "BMP.h"

#define MAX_DEPTH 8

/**
 * Draw a triangle at the specified coordinates
 * @param canvas Reference to the bitmap to which to draw triangle
 * @param x0, y0, x1, y1, x2, y2: Coordinates of points
 * @param thickness Thickness of line to draw
 */
void drawTriangle(BMP* canvas, int x0, int y0, int x1, int y1, int x2, int y2, int thickness) {
    canvas->plotLine(x0, y0, x1, y1, thickness);
    canvas->plotLine(x1, y1, x2, y2, thickness);
    canvas->plotLine(x2, y2, x0, y0, thickness);
}

/**
 * Draw a triangle at the specified coordinates
 * @param canvas Reference to the bitmap to which to draw triangle
 * @param x0, y0, x1, y1, x2, y2: Coordinates of points
 * @param depth Depth of recursion
 */
void drawSierpinski(BMP* canvas, int x0, int y0, int x1, int y1, int x2, int y2, int depth) {
    drawTriangle(canvas, x0, y0, x1, y1, x2, y2, 1);
    // TODO: Fill this in
    
}

int main() {
    int W = 1000;
    int H = 1000;
    BMP canvas(W, H);
    canvas.clearRect(0xFF, 0xFF, 0xFF, 0xFF);
    drawSierpinski(&canvas, 10, 10, 500, 990, 1000, 10, 0);

    canvas.write("result.bmp");
    return 0;
}
