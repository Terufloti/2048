#define is_down(b) input ->buttons[b].is_down
#define pressed(b) (input ->buttons[b].is_down && input ->buttons[b].changed)
#define released(b) (!input ->buttons[b].is_down && input ->buttons[b].changed)






internal void
simulate_end(Input* input) {
	clear_screen(0x111111);
	draw_rec(0, 0, 50, 15, 0xD3A713);

	//KONIEC - NAPIS//


	if (pressed(BUTTON_ESC)) endScreen = false;

}