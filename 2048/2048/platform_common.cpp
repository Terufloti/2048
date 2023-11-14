struct Button_State {
	bool is_down;
	bool changed;
};

enum {
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_LEFT,
	BUTTON_RIGHT,
	BUTTON_ESC,
	BUTTON_SPACEBAR,

	BUTTON_COUNT,
};

struct Input {
	Button_State buttons[BUTTON_COUNT];
};