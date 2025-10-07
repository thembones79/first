#include "raylib.h"
int main() {
  InitWindow(320, 200, "Siema");
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RED);
    DrawCircle(160, 100, 15, BLUE);
    EndDrawing();
  }
}
