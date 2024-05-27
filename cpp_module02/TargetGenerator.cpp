#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
    for(std::map<std::string, ATarget*>::iterator it = Targets.begin(); it != Targets.end(); it++)
        delete(it->second);
}
void TargetGenerator::learnTargetType(ATarget*ptr)
{
    if (!ptr)
        return;
    if (Targets.find(ptr->getType()) == Targets.end())
        Targets[ptr->getType()] = ptr->clone();
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
    if (Targets.find(type) != Targets.end())
    {
        delete(Targets[type]);
        Targets.erase(type);
    }
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
    if (Targets.find(type) != Targets.end())
        return Targets[type]->clone();
    return 0;
}