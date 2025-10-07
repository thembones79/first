#include "raylib.h"
int main() {
  int width{320};
  int height{200};

  InitWindow(width, height, "Siema");

  int circle_x{160};
  int circle_y{100};

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RED);

    // Game logic begins

    DrawCircle(circle_x, circle_y, 15, BLUE);

    if (IsKeyDown(KEY_D)) {
      circle_x = circle_x + 10;
    }

    if (IsKeyDown(KEY_W)) {
      circle_y = circle_y - 10;
    }

    if (IsKeyDown(KEY_A)) {
      circle_x = circle_x - 10;
    }

    if (IsKeyDown(KEY_S)) {
      circle_y = circle_y + 10;
    }

    // Game logic ends

    EndDrawing();
  }
}
