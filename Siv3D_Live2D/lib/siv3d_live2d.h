#pragma once
# include <Siv3D.hpp>
#define L2D_TARGET_D3D11
#include "Live2DModelD3D11.h"
#include <memory>
#include <wrl/client.h>
struct Live2DModelPimpl;
struct Live2DModel
{
  explicit Live2DModel(std::shared_ptr<Live2DModelPimpl> pimpl) : model(nullptr), pimpl_(pimpl) {}

  Array<Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>> textures;

  std::shared_ptr<live2d::Live2DModelD3D11> model;
  auto pimpl() const { return pimpl_; }

private:

  std::shared_ptr<Live2DModelPimpl> pimpl_;

};

class Live2D
{
  Live2D() = delete;
public:
  static void Initialize();
  static void AddDrawObject(const Live2DModel& model);

  static Live2DModel LoadModel(const FilePath& path, const Array<FilePath>& texturePath);

  static void SampleUpdate(const Live2DModel& model);
};
