#ifndef __GEO_H__
#define __GEO_H__

#include "server.h"

// 在 geo.c 中使用的结构来表示点和数组地球上的点。网上说之前是 zset？
/* Structures used inside geo.c in order to represent points and array of
 * points on the earth. */
typedef struct geoPoint {
    double longitude;
    double latitude;
    double dist;
    double score;
    char *member;
} geoPoint;

// geo 数组
typedef struct geoArray {
    struct geoPoint *array;
    size_t buckets;
    size_t used;
} geoArray;

#endif
