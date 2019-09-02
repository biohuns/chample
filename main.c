/**
 * Two-Phaseアルゴリズムのドライバー (C版)
 * http://kociemba.org/cube.htm
 * Version: 0.0.1
 *
 * 変更点(0.0.1):
 *     java1.4.4を移植しただけ
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "coordcube.h"
#include "cubiecube.h"
#include "kttools.h"
#include "scramble.h"
#include "search.h"

int main() {
  char facelets[128];
  char sequence[256];
  int i = 0;

  init();

  for (i = 0; i < 5; i++) {
    scramble(facelets, sequence);
    printf("%s\n", facelets);
    printf("%s\n", sequence);
  }

  return 0;
}
