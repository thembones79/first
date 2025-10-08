#include "raylib.h"
int main() {
  int width{350};
  int height{200};

  InitWindow(width, height, "Siema");

  int circle_x{175};
  int circle_y{100};

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(WHITE);

    // Game logic begins

    DrawCircle(circle_x, circle_y, 25, BLUE);
    DrawRectangle(300, 0, 50, 50, RED);

    if (IsKeyDown(KEY_D) && circle_x < width) {
      circle_x = circle_x + 10;
    }

    if (IsKeyDown(KEY_W) && circle_y > 0) {
      circle_y = circle_y - 10;
    }

    if (IsKeyDown(KEY_A) && circle_x > 0) {
      circle_x = circle_x - 10;
    }

    if (IsKeyDown(KEY_S) && circle_y < height) {
      circle_y = circle_y + 10;
    }

    // Game logic ends

    EndDrawing();
  }
}
