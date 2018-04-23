#include "weaveaddtool.h"

bool WeaveAddTool::mouseButtonEvent(const Eigen::Vector2i &p, int button,
                                    bool down, int modifiers,
                                    const Eigen::Vector2f &worldPos,
                                    std::shared_ptr<MailleInlay> inlay)
{
    if (!down)
        return true;

    weaveManager->addRing(worldPos, inlay);
    return true;
}