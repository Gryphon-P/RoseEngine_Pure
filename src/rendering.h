
struct Camera 
{
    // TODO
};

#define WHITE {1.f, 1.f, 1.f, 1.f};
struct Light 
{
    Matrix transform = MatrixIdentity();
    float brightnessMultiplier = 1.f;
    Vector4 color = WHITE;
};

struct PointLight : Light 
{
};

struct SpotLight : Light 
{
};

struct PlaneLight : Light 
{
};

struct Mesh 
{
};