#include <stdio.h>
#include "BMP.h"

/**
 * Draw a triangle at the specified coordinates
 * @param bmp Reference to the bitmap to which to draw triangle
 * @param x0, y0, x1, y1, x2, y2: Coordinates of points
 * @param thickness Thickness of line to draw
 */
void drawTriangle(BMP* bmp, int x0, int y0, int x1, int y1, int x2, int y2, int thickness) {
    bmp->plotLine(x0, y0, x1, y1, thickness);
    bmp->plotLine(x1, y1, x2, y2, thickness);
    bmp->plotLine(x2, y2, x0, y0, thickness);
}

int main() {
    int W = 500;
    int H = 400;
    BMP bmp(W, H);
    bmp.clearRect(0xFF, 0xFF, 0xFF, 0xFF);
    drawTriangle(&bmp, 10, 10, 200, 200, 300, 20, 2);

    bmp.write("result.bmp");
    return 0;
}
