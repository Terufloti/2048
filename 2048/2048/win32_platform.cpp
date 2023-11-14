#include <windows.h>
#include <string>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include <atlbase.h>
#include <iostream>

#include "utils.cpp"



global_variable bool running = true;
global_variable bool endScreen = true;
global_variable bool startScreen = true;
global_variable bool difficultyScreen = true;
global_variable int score = 0;
global_variable short difficulty = 0;
global_variable int sameArrays;
// const short boardSize = 4;
// int board[boardSize][boardSize];
// int beforeAction[boardSize][boardSize];
// (przeniesione do game.cpp)


struct Render_State {
	int height, width;
	void* memory;

	BITMAPINFO bitmap_info;
};


global_variable Render_State render_state;

#include "platform_common.cpp"
#include "renderer.cpp"
#include "renderer_8.cpp"
#include "renderer_16.cpp"
#include "start.cpp"
#include "diffScreen.cpp"
#include "game.cpp"
#include "end.cpp"


LRESULT CALLBACK window_callback(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	LRESULT result = 0;

	
	switch (uMsg) {
		case WM_CLOSE:

		case WM_DESTROY: {
			running = false;
			endScreen = false;
			startScreen = false;
			difficultyScreen = false;
		} break;

			
		case WM_SIZE: {
			RECT rect;
			GetClientRect(hwnd, &rect);
			render_state.width = rect.right - rect.left;
			render_state.height = rect.bottom - rect.top;

			int size = render_state.width * render_state.height * sizeof(u32);
			
			if (render_state.memory) VirtualFree(render_state.memory, 0, MEM_RELEASE);
			render_state.memory = VirtualAlloc(0,size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

			render_state.bitmap_info.bmiHeader.biSize = sizeof(render_state.bitmap_info.bmiHeader);
			render_state.bitmap_info.bmiHeader.biWidth = render_state.width;
			render_state.bitmap_info.bmiHeader.biHeight = render_state.height;
			render_state.bitmap_info.bmiHeader.biPlanes = 1;
			render_state.bitmap_info.bmiHeader.biBitCount = 32;
			render_state.bitmap_info.bmiHeader.biCompression = BI_RGB;

		}
		

		default: {
			result = DefWindowProc(hwnd, uMsg, wParam, lParam);
			
		}
	}
	return result;
}



int WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	//klasa okienka
	WNDCLASS window_class = {0};
	window_class.style = CS_HREDRAW | CS_VREDRAW;
	window_class.lpszClassName = L"Projekt";
	window_class.lpfnWndProc = window_callback;

	


	//zarejestrowanie klasy okienka
	RegisterClass(&window_class);
	//RegisterClass(&window_button_class);
	


	//stworzenie okienka
	int screen_size_X, screen_size_Y;
	screen_size_X = GetSystemMetrics(SM_CYSCREEN);
	screen_size_Y = GetSystemMetrics(SM_CXSCREEN);


	//konwersja z LPCSTR do LPCWSTR na potrzeby argumentu(2) dla CreateWindow();
	USES_CONVERSION;
	LPCSTR a = "2048";
	LPCWSTR b = A2W(a);
	

	HWND window = CreateWindow(window_class.lpszClassName, b, WS_OVERLAPPEDWINDOW | WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, 900, 900, 0, 0, hInstance, 0);

	HDC hdc = GetDC(window);
	HDC hdc_start = GetDC(window);
	HDC hdc_end = GetDC(window);
	HDC hdc_diffScreen = GetDC(window);
	Input input = {};



	///Tu siê koñczy instrukcja tworz¹ca okno

	/////////////////////////////////// G L O B A L ////////////////////////////////////////////
	

	float delta_time = 0.016666f;

	LARGE_INTEGER frame_begin_time;
	QueryPerformanceCounter(&frame_begin_time);


	float performance_frequency;
	{
		LARGE_INTEGER perf;
		QueryPerformanceFrequency(&perf);
		performance_frequency = (float)perf.QuadPart;
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///START
	while (startScreen) {
		MSG message;

		for (int i = 0; i < BUTTON_COUNT; i++) {
			input.buttons[i].changed = false;
		}

		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {


			switch (message.message) {
			case WM_KEYUP:


			case WM_KEYDOWN: {
				u32 vk_code = (u32)message.wParam;
				bool is_down = ((message.lParam & (1 << 31)) == 0);


#define process_button(b,vk)\
case vk: {\
input.buttons[b].is_down = is_down;\
input.buttons[b].changed = true;\
}break;




				switch (vk_code) {
					process_button(BUTTON_UP, VK_UP);
					process_button(BUTTON_DOWN, VK_DOWN);
					process_button(BUTTON_LEFT, VK_LEFT);
					process_button(BUTTON_RIGHT, VK_RIGHT);
					process_button(BUTTON_ESC, VK_ESCAPE);
					process_button(BUTTON_SPACEBAR, VK_SPACE);
				}

			} break;


			default: {
				TranslateMessage(&message);
				DispatchMessage(&message);
			}
			}

		}



		simulate_start(&input);
		




		StretchDIBits(hdc_start, 0, 0, render_state.width, render_state.height, 0, 0, render_state.width, render_state.height, render_state.memory, &render_state.bitmap_info, DIB_RGB_COLORS, SRCCOPY);
		LARGE_INTEGER frame_end_time;
		QueryPerformanceCounter(&frame_end_time);
		delta_time = (float)(frame_end_time.QuadPart - frame_begin_time.QuadPart) / performance_frequency;
		frame_begin_time = frame_end_time;


	}


	while (difficultyScreen) {
		MSG message;

		for (int i = 0; i < BUTTON_COUNT; i++) {
			input.buttons[i].changed = false;
		}

		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {


			switch (message.message) {
			case WM_KEYUP:


			case WM_KEYDOWN: {
				u32 vk_code = (u32)message.wParam;
				bool is_down = ((message.lParam & (1 << 31)) == 0);


				switch (vk_code) {
					process_button(BUTTON_UP, VK_UP);
					process_button(BUTTON_DOWN, VK_DOWN);
					process_button(BUTTON_LEFT, VK_LEFT);
					process_button(BUTTON_RIGHT, VK_RIGHT);
					process_button(BUTTON_ESC, VK_ESCAPE);
					process_button(BUTTON_SPACEBAR, VK_SPACE);
				}

			} break;


			default: {
				TranslateMessage(&message);
				DispatchMessage(&message);
			}
			}

		}



		simulate_diffScreen(&input);





		StretchDIBits(hdc_diffScreen, 0, 0, render_state.width, render_state.height, 0, 0, render_state.width, render_state.height, render_state.memory, &render_state.bitmap_info, DIB_RGB_COLORS, SRCCOPY);
		LARGE_INTEGER frame_end_time;
		QueryPerformanceCounter(&frame_end_time);
		delta_time = (float)(frame_end_time.QuadPart - frame_begin_time.QuadPart) / performance_frequency;
		frame_begin_time = frame_end_time;


	}





	


	///KONIEC STARTU
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	

	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	///GAME
	srand(time(NULL));
    switch(difficulty) {
        case 4: {
            for (int i = 0; i < boardSize; i++) {
                for (int j = 0; j < boardSize; j++) {
                    board[i][j] = 0; // wypelnienie tablicy zerami
                }
            }
            saveToBoard(board);
            saveToBoard(board);
        } break;
        case 2: {
            for (int i = 0; i < boardSize8; i++) {
                for (int j = 0; j < boardSize8; j++) {
                    board8[i][j] = 0; // wypelnienie tablicy zerami
                }
            }
            saveToBoard8(board8);
            saveToBoard8(board8);
        } break;
        case 1: {
            for (int i = 0; i < boardSize16; i++) {
                for (int j = 0; j < boardSize16; j++) {
                    board16[i][j] = 0; // wypelnienie tablicy zerami
                }
            }
            saveToBoard16(board16);
            saveToBoard16(board16);
        }break;
    }
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	while (running) {
		//wejscie
		MSG message;
	
		for (int i = 0; i < BUTTON_COUNT; i++) {
			input.buttons[i].changed = false;
		}




		//kopia obecnej tablicy do beforeAction
        switch(difficulty) {
            case 1: {     for (int i = 0; i < boardSize; i++) {
                    for (int j = 0; j < boardSize; j++) {
                        beforeAction[i][j] = board[i][j];
                        }
                    }
            }break;
            case 2: {    for (int i = 0; i < boardSize8; i++) {
                for (int j = 0; j < boardSize8; j++) {
                    beforeAction8[i][j] = board8[i][j];
                    }
                }
            } break;
            case 4: {
                for (int i = 0; i < boardSize16; i++) {
                for (int j = 0; j < boardSize16; j++) {
                    beforeAction16[i][j] = board16[i][j];
                    }
                }
            }break;
        }

		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {
			

			switch (message.message) {
				case WM_KEYUP:


				case WM_KEYDOWN: {
					u32 vk_code = (u32)message.wParam;
					bool is_down = ((message.lParam & (1 << 31)) == 0);




				

					switch (vk_code) {
						process_button(BUTTON_UP, VK_UP);
						process_button(BUTTON_DOWN, VK_DOWN);
						process_button(BUTTON_LEFT, VK_LEFT);
						process_button(BUTTON_RIGHT, VK_RIGHT);
						process_button(BUTTON_ESC, VK_ESCAPE);
						process_button(BUTTON_SPACEBAR, VK_SPACE);
					}
					
				} break;


				default: {
					TranslateMessage(&message);
					DispatchMessage(&message);
				}
			}

		}
	
		
		
		//symulacja

		///Tu sie pojawi opcja z wyborem poziomu trudnosci (niebawem jak sie wyspie)
        ///Juz sie pojawila :)

		switch (difficulty) {
		case 4: simulate_game4x4(&input); break;
		case 2: simulate_game8x8(&input); break;
		case 1: simulate_game16x16(&input); break;
		default: simulate_game4x4(&input);
		}
		//simulate_game4x4(&input);
		
		


		//render vol. action
		StretchDIBits(hdc, 0, 0, render_state.width, render_state.height, 0, 0, render_state.width, render_state.height, render_state.memory, &render_state.bitmap_info, DIB_RGB_COLORS, SRCCOPY);
		LARGE_INTEGER frame_end_time;
		QueryPerformanceCounter(&frame_end_time);
		delta_time = (float)(frame_end_time.QuadPart - frame_begin_time.QuadPart) / performance_frequency;
		frame_begin_time = frame_end_time;
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ENDSCREEN




	while (endScreen) {
		MSG message;

		for (int i = 0; i < BUTTON_COUNT; i++) {
			input.buttons[i].changed = false;
		}

		while (PeekMessage(&message, window, 0, 0, PM_REMOVE)) {


			switch (message.message) {
			case WM_KEYUP:


			case WM_KEYDOWN: {
				u32 vk_code = (u32)message.wParam;
				bool is_down = ((message.lParam & (1 << 31)) == 0);


				switch (vk_code) {
					process_button(BUTTON_UP, VK_UP);
					process_button(BUTTON_DOWN, VK_DOWN);
					process_button(BUTTON_LEFT, VK_LEFT);
					process_button(BUTTON_RIGHT, VK_RIGHT);
					process_button(BUTTON_ESC, VK_ESCAPE);
					process_button(BUTTON_SPACEBAR, VK_SPACE);
				}

			} break;


			default: {
				TranslateMessage(&message);
				DispatchMessage(&message);
			}
			}

		}
		


		//symulacja zakonczenia
		simulate_end(&input);


		//render vol. end
		StretchDIBits(hdc_end, 0, 0, render_state.width, render_state.height, 0, 0, render_state.width, render_state.height, render_state.memory, &render_state.bitmap_info, DIB_RGB_COLORS, SRCCOPY);
		LARGE_INTEGER frame_end_time;
		QueryPerformanceCounter(&frame_end_time);
		delta_time = (float)(frame_end_time.QuadPart - frame_begin_time.QuadPart) / performance_frequency;
		frame_begin_time = frame_end_time;

	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
