/*
Oxe FM Synth: a software synthesizer
Copyright (C) 2004-2015  Daniel Moura <oxe@oxesoft.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define LCD_EECH    1  // horizontal space between the LCD characters
#define LCD_EECV    1  // vertical space between the LCD characters
#define LCD_COLS    16 // columns
#define LCD_LINS    2  // lines
#define LCD_ALTDIG  7  // char height in pixels
#define LCD_LARDIG  5  // char width in pixels
#define LCD_X       0  // bg left
#define LCD_Y       0  // bg top

class CLcd
{
private:
	char    text0[LCD_COLS];
	char    text1[LCD_COLS];
	int     lcdx;
	int     lcdy;
	HBITMAP bmpchars;  // characters table 16x2
	HWND    hwnd;      // window handle
	HDC     dc;        // used by offscreen buffer
	HDC     memdc;     // used by offscreen buffer
	RECT    rect;
	void Repaint();
public:
	CLcd(HBITMAP bmpchars, int x, int y);
	bool SetText(char linha, const char *text);
	void SetHandlers(HWND hwnd, HDC dc, HDC memdc);
};
