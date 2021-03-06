#ifndef OPENMW_ESM_GLOB_H
#define OPENMW_ESM_GLOB_H

#include <string>

#include "defs.hpp"

namespace ESM
{

class ESMReader;
class ESMWriter;

/*
 * Global script variables
 */

struct Global
{
    std::string mId;
    float mValue;
    VarType mType;

    void load(ESMReader &esm);
    void save(ESMWriter &esm);

    void blank();
    ///< Set record to default state (does not touch the ID).
};

bool operator== (const Global& left, const Global& right);

}
#endif
