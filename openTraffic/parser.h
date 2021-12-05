#ifndef PARSER_H
#define PARSER_H
#pragma once
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <QDebug>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <QPoint>
class Parser
{
public:
    struct point {
        float x, y, z;
    };
    struct textcord {
        float x, y;
    };
    struct normals {
        float x, y, z;
    };
    struct surf {
        int pnum, tnum, nnum;
        int pnum2, tnum2, nnum2;
        int pnum3, tnum3, nnum3;
        //int pnum4, tnum4, nnum4;
    };
private:
    bool colored=true;
    int width,height,cntr;
    unsigned char *data;
    std::vector<point> pvect;
    std::vector<textcord> tvect;
    std::vector<normals> nvect;
    std::vector<surf> svect;
    point pbuff;
    textcord tbuff;
    normals nbuff;
    surf sbuff;
    float fbuff;
    char buff[80];
    void InitParse();
    FILE* mylf;
public:
    Parser(){};
    Parser(char* name,char* texture_path);
    bool IsColored();
    int GetWidth();
    int GetHeight();
    int GetCenter();
    unsigned char* GetData();
    void ShowStat();
    void SetPath(char* file_path);

    std::vector<point> GetPointsPose();
    std::vector<textcord> GetTexture();
    std::vector<normals> GetNormals();
    std::vector<surf> GetFaces();
};


#endif // PARSER_H
