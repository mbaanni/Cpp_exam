#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
        const Warlock &operator=(const Warlock &obg);
        Warlock(const Warlock &obg);
        Warlock();
    public:
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        const std::string &getName()const;
        const std::string &getTitle()const;
        void setTitle(const std::string &ref);
        void introduce() const;
};