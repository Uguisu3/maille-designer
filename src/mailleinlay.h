#pragma once

#include "torus.h"

/*
 * Struct with all necessary variables for describing an inlay design.
 *
 * TODO: Consider adding another struct ProgramState or something similar which
 * can get passed around in addition to the MailleInlay struct. It will contain
 * variables not necessary to describing the inlay design, but that are useful
 * for tools, etc to have, such as the currently selected rings, whether a key
 * is currently pressed (eg ctrl key pressed to append to selection), etc.
 */
struct MailleInlay
{
    float ambientIntensity;
    std::vector<std::shared_ptr<Torus>> rings;
    std::vector<std::shared_ptr<Torus>> selectedRings;
    bool ringsModified;
};
