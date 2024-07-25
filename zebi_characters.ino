#include "M5Atom.h"
#define WIDTH 5

uint8_t disp[WIDTH][WIDTH];

void draw_disp() {
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < WIDTH; ++j) {
      if (disp[i][j]) {
        M5.dis.drawpix(i * WIDTH + j, 0xffffff);
      } else {
        M5.dis.drawpix(i * WIDTH + j, 0x000000);
      }
    }
  }
}

void draw_zebi_number(unsigned int n) {
  switch (n) {
    case 0: {
      disp[0][0] = 0; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 0;
      break;
    }
    case 1: {
      disp[0][0] = 0; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
    case 2: {
      disp[0][0] = 0; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 1;
      break;
    }
    case 3: {
      disp[0][0] = 0; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
    case 4: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 0;
      break;
    }
    case 5: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
    case 6: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 1;
      break;
    }
    case 7: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 0; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 0; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 0; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
    case 8: {
      disp[0][0] = 1; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 0;
      break;
    }
    case 9: {
      disp[0][0] = 1; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
    case 10: {
      disp[0][0] = 1; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 1;
      break;
    }
    case 11: {
      disp[0][0] = 1; disp[0][1] = 0; disp[0][2] = 0; disp[0][3] = 0; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
    case 12: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 0;
      break;
    }
    case 13: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 0;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 0;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 0;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
    case 14: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 0; disp[4][2] = 0; disp[4][3] = 0; disp[4][4] = 1;
      break;
    }
    case 15: {
      disp[0][0] = 1; disp[0][1] = 1; disp[0][2] = 1; disp[0][3] = 1; disp[0][4] = 1;
      disp[1][0] = 1; disp[1][1] = 0; disp[1][2] = 0; disp[1][3] = 1; disp[1][4] = 1;
      disp[2][0] = 1; disp[2][1] = 0; disp[2][2] = 1; disp[2][3] = 0; disp[2][4] = 1;
      disp[3][0] = 1; disp[3][1] = 1; disp[3][2] = 0; disp[3][3] = 0; disp[3][4] = 1;
      disp[4][0] = 1; disp[4][1] = 1; disp[4][2] = 1; disp[4][3] = 1; disp[4][4] = 1;
      break;
    }
  }
  draw_disp();
}

unsigned int counter = 0;

void setup(){
    M5.begin(false, false, true);
    draw_zebi_number(counter);
}

void loop(){
    M5.update();
    if (M5.Btn.wasReleased()) {
      counter = (counter + 1) % 16;
      draw_zebi_number(counter);
    }
}
