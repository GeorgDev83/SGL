#include "sgl.h"

/**
 * Datos para dibujar un polígono cuadrado
 */
POINT point_CUADRADO[] = {
    POStoFIXED(0.0, 0.0, 0.0),
    POStoFIXED(15.0, 15.0, 0.0),
    POStoFIXED(-15.0, 15.0, 0.0),
    POStoFIXED(-15.0, 15.0, 0.0)};

POLYGON polygon_CUADRADO[] = {
    NORMAL(0.0, 0.0, -1.0),
    VERTICES(0, 1, 2, 3)};

ATTR attribute_CUADRADO[] = {
    ATTRIBUTE(Single_Plane, SORT_MAX, No_Texture, C_RGB(0, 255, 0), No_Gouraud, MESHoff, sprPolygon, UseLight)};

PDATA PD_CUADRADO = {
    point_CUADRADO, sizeof(point_CUADRADO) / sizeof(POINT),
    polygon_CUADRADO, sizeof(polygon_CUADRADO) / sizeof(POLYGON),
    attribute_CUADRADO};

/**
 * Datos para dibujar un polígono triangular
 */
POINT point_TRIANGULO[] = {
    POStoFIXED(-15.0, -15.0, 0.0),
    POStoFIXED(15.0, -15.0, 0.0),
    POStoFIXED(15.0, 15.0, 0.0),
    POStoFIXED(15.0, 15.0, 0.0)};

POLYGON polygon_TRIANGULO[] = {
    NORMAL(0.0, 1.0, 0.0),
    VERTICES(0, 1, 2, 3)};

ATTR attribute_TRIANGULO[] = {
    ATTRIBUTE(Single_Plane, SORT_MAX, No_Texture, C_RGB(0, 0, 255), No_Gouraud, MESHoff, sprPolygon, UseLight)};

PDATA PD_TRIANGULO = {
    point_TRIANGULO, sizeof(point_TRIANGULO) / sizeof(POINT),
    polygon_TRIANGULO, sizeof(polygon_TRIANGULO) / sizeof(POLYGON),
    attribute_TRIANGULO};