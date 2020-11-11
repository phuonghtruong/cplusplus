class Singleton
{
protected:
    Singleton(const std::string value) : value_(value)
    {}

    static Singleton *singleton_;
    std::string value_;
public:
    // Singleton should not be cloneable
    Singleton(Singleton &other) = delete;
    // Singleton should not be assignable
    void operator=(const Singleton &) = delete;

    /**
        * This is the static method that controls the access to the singleton
        * instance. On the first run, it creates a singleton object and places it
        * into the static field. On subsequent runs, it returns the client existing
        * object stored in the static field.
    */
    static Singleton *GetInstance(const std::string& value);

    void SomeBusinessLogic()
    {

    }

    std::string value() const{
        return value_;
    }
};