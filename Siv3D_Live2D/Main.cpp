
# include <Siv3D.hpp>
#include "lib/siv3d_live2d.h"
void Main()
{
  const Font font(30);

  Live2D::Initialize();

  auto model = Live2D::LoadModel(L"res\\epsilon\\Epsilon2.1.moc", { L"res\\epsilon\\Epsilon2.1.2048\\texture_00.png" });

  while ( System::Update() )
  {
    font(L"ようこそ、Siv3D の世界へ！").draw();

    Live2D::SampleUpdate(model);
    Live2D::AddDrawObject(model);

    Circle(Mouse::Pos(), 50).draw({ 255, 0, 0, 127 });
  }
}
