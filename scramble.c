#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "coordcube.h"
#include "cubiecube.h"
#include "kttools.h"
#include "search.h"

void scramble_init() {
  // シード値
  unsigned long seed = 0;
  // 静的データの初期化
  mt_init((unsigned long)time(NULL) + seed);
  cubiecube_init();
  coordcube_init();
}

void scramble(char facelets[128], char sequence[256]) {
  // スクランブルの長さの最大値
  int depth = 30;
  // タイムアウト値(ミリ秒)
  time_t limit = 5000;
  // スクランブル生成
  Search sc;
  char stat[128], result[128], output[256];

  random_cube(stat);
  strcpy(facelets, stat);

  solution(&sc, stat, depth, limit, 0, result);

  if (result[0] == 'E') {  // if Error
    strcpy(output, result);
  } else {
    reverse_alg(result, output);
  }
  strcpy(sequence, output);
}
