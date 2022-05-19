#include <raylib.h>

class Player {
public:
	Texture2D hair;
	Texture2D head;
	Texture2D body;
	Rectangle spritePosition;
	Vector2 position;
};

int main() {
	InitWindow(800, 480, "Window");
	SetTargetFPS(60);
	//-----------begin drawing------------
	while (!WindowShouldClose()) {
		ClearBackground(WHITE);

		EndDrawing();
	}
	CloseWindow();
}