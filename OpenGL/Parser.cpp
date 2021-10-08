#include "parser.h"

void Parser::ShowStat()
{

    for (int i = 0; i < pvect.size(); i++)
    {
        //std::cout << i << " point`s coord is: " << pvect[i].x << ' ' << pvect[i].y << ' ' << pvect[i].z << '\n';
        qDebug() << i << " point`s coord is: " << pvect[i].x << ' ' << pvect[i].y << ' ' << pvect[i].z << '\n';
    }
    for (int i = 0; i < tvect.size(); i++)
    {
        //std::cout << i << " texture pos: " << tvect[i].x << ' ' << tvect[i].y << std::endl;
        qDebug() << i << " texture pos: " << tvect[i].x << ' ' << tvect[i].y << '\n';
    }
    for (int i = 0; i < nvect.size(); i++)
    {
        //std::cout << i << " normal: " << nvect[i].x << ' ' << nvect[i].y << ' ' << nvect[i].z << std::endl;
        qDebug() << i << " normal: " << nvect[i].x << ' ' << nvect[i].y << ' ' << nvect[i].z << '\n';
    }
    for (int i = 0; i < svect.size(); i++)
    {
        //std::cout << i << " surface have points: " << svect[i].pnum << ' ' << svect[i].pnum2 << ' ' << svect[i].pnum3 << ' ' << svect[i].pnum4 << std::endl;
        //std::cout << svect[i].pnum << "have : " << svect[i].tnum << ' ' << svect[i].nnum << std::endl;
        //std::cout << svect[i].pnum2 << "have : " << svect[i].tnum2 << ' ' << svect[i].nnum2 << std::endl;
        //std::cout << svect[i].pnum3 << "have : " << svect[i].tnum3 << ' ' << svect[i].nnum3 << std::endl;
        //std::cout << svect[i].pnum4 << "have : " << svect[i].tnum4 << ' ' << svect[i].nnum4 << std::endl;
        qDebug() << i << " surface have points: " << svect[i].pnum << ' ' << svect[i].pnum2 << ' ' << svect[i].pnum3 << ' ' <<  '\n'; //svect[i].pnum4 <<
        qDebug() << svect[i].pnum << "have : " << svect[i].tnum << ' ' << svect[i].nnum << '\n';
        qDebug() << svect[i].pnum2 << "have : " << svect[i].tnum2 << ' ' << svect[i].nnum2 <<'\n';
        qDebug() << svect[i].pnum3 << "have : " << svect[i].tnum3 << ' ' << svect[i].nnum3 <<'\n';
        //qDebug() << svect[i].pnum4 << "have : " << svect[i].tnum4 << ' ' << svect[i].nnum4 <<'\n';
    }
}

std::vector<Parser::point> Parser::GetPointsPose()
{
    return pvect;
}

std::vector<Parser::textcord> Parser::GetTexture()
{
    return tvect;
}

std::vector<Parser::normals> Parser::GetNormals()
{
    return nvect;
}

std::vector<Parser::surf> Parser::GetFaces()
{
    return svect;
}
void Parser::SetPath(char *file_path)
{
    try
    {
        mylf = fopen(file_path, "r");
        InitParse();
    }  catch (...) {
        std::cout<<"wrong path way";
    }
}
void Parser::InitParse()
{
    while (!feof(mylf))
    {
        strcpy(buff, "");
        fscanf(mylf, "%s", buff);
        if (!strcmp(buff, "v"))
        {
            fscanf(mylf, "%f %f %f", &pbuff.x, &pbuff.y, &pbuff.z);
            pvect.push_back(pbuff);
        }
        else if (!strcmp(buff, "vt"))
        {
            fscanf(mylf, "%f %f", &tbuff.x, &tbuff.y);
            tvect.push_back(tbuff);
        }
        else if (!strcmp(buff, "vn"))
        {
            fscanf(mylf, "%f %f %f", &nbuff.x, &nbuff.y, &nbuff.z);
            nvect.push_back(nbuff);
        }
        else if (!strcmp(buff, "f"))
        {
            fscanf(mylf, "%d/%d/%d %d/%d/%d %d/%d/%d", &sbuff.pnum, &sbuff.tnum, &sbuff.nnum, &sbuff.pnum2, &sbuff.tnum2, &sbuff.nnum2, &sbuff.pnum3, &sbuff.tnum3, &sbuff.nnum3); // %d/%d/%d ,&sbuff.pnum4, &sbuff.tnum4, &sbuff.nnum4
            if (sbuff.tnum == NULL ||
                sbuff.tnum2 == NULL ||
                sbuff.tnum3 == NULL
              // sbuff.tnum4 == NULL
                ) {
                sbuff.tnum = sbuff.tnum2 = sbuff.tnum3 = 1;//sbuff.tnum4
            }
            sbuff.pnum -= 1;
            sbuff.pnum2 -= 1;
            sbuff.pnum3 -= 1;
            //sbuff.pnum4 -= 1;
            sbuff.tnum -= 1;
            sbuff.tnum2 = sbuff.tnum2-1;
            sbuff.tnum3 -= 1;
            //sbuff.tnum4 -= 1;
            sbuff.nnum -= 1;
            sbuff.nnum2 -= 1;
            sbuff.nnum3 -= 1;
            //sbuff.nnum4 -= 1;
            /*mylf >> buff;
            sbuff.pnum = (int)buff[0]-48;
            sbuff.nnum = (int)buff[2]-48;
            sbuff.tnum = (int)buff[4]-48;
            mylf >> buff;
            sbuff.pnum2 = (int)buff[0] - 48;
            sbuff.nnum2 = (int)buff[2] - 48;
            sbuff.tnum2 = (int)buff[4] - 48;
            mylf >> buff;
            sbuff.pnum3 = (int)buff[0] - 48;
            sbuff.nnum3 = (int)buff[2] - 48;
            sbuff.tnum3 = (int)buff[4] - 48;
            mylf >> buff;
            sbuff.pnum4 = (int)buff[0] - 48;
            sbuff.nnum4 = (int)buff[2] - 48;
            sbuff.tnum4 = (int)buff[4] - 48;*/
            svect.push_back(sbuff);

        }

    }

}
