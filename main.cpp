#include "raylib.h"
int main() {
  InitWindow(320, 200, "Siema");
  while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
  }
}
