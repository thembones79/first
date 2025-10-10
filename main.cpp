#include "raylib.h"
int main() {
  int width{800};
  int height{450};

  InitWindow(width, height, "Siema");

  int circle_x{200};
  int circle_y{200};

  int axe_x{400};
  int axe_y{0};

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(WHITE);

    // Game logic begins

    DrawCircle(circle_x, circle_y, 25, BLUE);
    DrawRectangle(axe_x, axe_y, 50, 50, RED);

    axe_y = axe_y + 10;

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
