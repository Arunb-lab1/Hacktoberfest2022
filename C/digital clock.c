// C program to print digital
// clock using graphics
#include <graphics.h>
#include <time.h>

// driver code
int main()
{
	// DETECT is a macro defined in
	// "graphics.h" header file
	int dt = DETECT, gmode, midx, midy;
	long current_time;
	char strftime[30];

	// initialize graphic mode
	initgraph(&dt, &gmode, "");

	// to find mid value in horizontal
	// and vertical axis
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	// set current colour to white
	setcolor(WHITE);

	// make a rectangular box in
	// the middle of screen
	rectangle(midx - 200, midy - 40, midx + 200,midy + 40);

	// fill rectangle with white color
	floodfill(midx, midy, WHITE);
	while (!kbhit()) {

		// get current time in seconds
		current_time = time(NULL);

		// store time in string
		strcpy(strftime, ctime(¤t_time));

		// set color of text to red
		setcolor(RED);

		// set the text justification
		settextjustify(CENTER_TEXT, CENTER_TEXT);

		// to set styling to text
		settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);

		// locate position to write
		moveto(midx, midy);

		// print current time
		outtext(strftime);
	}
	getch();

	// deallocate memory for graph
	closegraph();
}
