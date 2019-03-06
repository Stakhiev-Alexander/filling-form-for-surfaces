#include "jsonInteractions.hpp"

#include <fstream>
#include "nlohmann\json.hpp"

using json = nlohmann::json;

struct surfaceIndices_t
{
  int surfaceType1;
  int surfaceType2;
  int surfaceNumber;
};

struct surfaceParams_t
{
  double diameter;
  double length;
};

struct appMach_t
{
  std::string name1;
  std::string name2;
  std::string name3;
  std::string name4;
};

struct toolParams_t
{
  std::string name;
  std::string type;
  double Vmin;
  double Vmax;
  double Smin;
  double Smax;
  double tmin;
  double tmax;
  double durabMin;
  double durabMax;
};

struct workpieceParams_t
{
  int number;
  std::string type;
  double diameter;
  double length;
};

struct blockParams_t
{
  int number;
  std::string axisPos;
  double anglePos;
  double za;
  double zb;
};

bool jsonInteractions::writeToJson()
{
  std::string methodName = "Turning";
  int methodNumber = 1;

  surfaceIndices_t surfaceIndices;

  surfaceIndices.surfaceType1 = 1;
  surfaceIndices.surfaceType2 = 1;
  surfaceIndices.surfaceNumber = 1;

  int numberOfParams = 2;

  surfaceParams_t surfaceParams;

  surfaceParams.diameter = 17;
  surfaceParams.length = 3;

  appMach_t appMach;
  appMach.name1 = "M1";
  appMach.name2 = "M2";
  appMach.name3 = "M3";
  appMach.name4 = "M4";

  int numberTools = 3;

  std::vector<toolParams_t> appTools;

  for (auto i = 0; i < numberTools; i++) {
    toolParams_t toolParams;
    toolParams.name = "CT_1_1";
    toolParams.type = "TYPE";
    toolParams.Vmin = 0;
    toolParams.Vmax = 0;
    toolParams.Smin = 0;
    toolParams.Smax = 0;
    toolParams.tmin = 0;
    toolParams.tmax = 0;
    toolParams.durabMin = 0;
    toolParams.durabMax = 0;
    appTools.push_back(toolParams);
  }

  workpieceParams_t workpieceParams;

  workpieceParams.number = 1;
  workpieceParams.type = "Round";
  workpieceParams.diameter = 65;
  workpieceParams.length = 40;

  blockParams_t blockParams;

  blockParams.number = 1;
  blockParams.axisPos = "+";
  blockParams.anglePos = 0;
  blockParams.za = 0;
  blockParams.zb = 0;

  int numberInBlock = 0;

  json jOut = {
    {"methodName", methodName},
    {"methodNumber", methodNumber},
    {"surfaceIndices",
     {
        {"surfaceType1", surfaceIndices.surfaceType1},
        {"surfaceType2", surfaceIndices.surfaceType2},
        {"surfaceNumber", surfaceIndices.surfaceNumber}
     }
    },
    {"surfaceParams",
     {
       {"diameter", surfaceParams.diameter},
       {"length", surfaceParams.length}
     }
    },
    {"appMach",
     {
       {"name", appMach.name1},
       {"name", appMach.name2},
       {"name", appMach.name3},
       {"name", appMach.name4}
     }
    },

    {"appTools",
     {
       {
         {"name", appTools.at(0).name},
         {"type", appTools.at(0).type},
         {"Vmin", appTools.at(0).Vmin},
         {"Vmax", appTools.at(0).Vmax},
         {"Smin", appTools.at(0).Smin},
         {"Smax", appTools.at(0).Smax},
         {"tmin", appTools.at(0).tmin},
         {"tmax", appTools.at(0).tmax},
         {"durabMin", appTools.at(0).durabMin},
         {"durabMax", appTools.at(0).durabMax}

       },
       {
         {"name", appTools.at(1).name},
         {"type", appTools.at(1).type},
         {"Vmin", appTools.at(1).Vmin},
         {"Vmax", appTools.at(1).Vmax},
         {"Smin", appTools.at(1).Smin},
         {"Smax", appTools.at(1).Smax},
         {"tmin", appTools.at(1).tmin},
         {"tmax", appTools.at(1).tmax},
         {"durabMin", appTools.at(1).durabMin},
         {"durabMax", appTools.at(1).durabMax}
       },
       {
         {"name", appTools.at(2).name},
         {"type", appTools.at(2).type},
         {"Vmin", appTools.at(2).Vmin},
         {"Vmax", appTools.at(2).Vmax},
         {"Smin", appTools.at(2).Smin},
         {"Smax", appTools.at(2).Smax},
         {"tmin", appTools.at(2).tmin},
         {"tmax", appTools.at(2).tmax},
         {"durabMin", appTools.at(2).durabMin},
         {"durabMax", appTools.at(2).durabMax}
       }
     }
    },

    {"workpieceParams",
     {
       {"number", workpieceParams.number},
       {"type", workpieceParams.type},
       {"diameter", workpieceParams.diameter},
       {"length", workpieceParams.length}
     }
    },

    {"blockParams",
     {
       {"number", blockParams.number},
       {"axisPos", blockParams.axisPos},
       {"anglePos", blockParams.anglePos},
       {"za", blockParams.za},
       {"zb", blockParams.zb}
     }
    },

    {"numberInBlock", numberInBlock}
  };

  std::ofstream o("output.json");
  o << jOut;
}

bool jsonInteractions::readFromJson()
{

}

