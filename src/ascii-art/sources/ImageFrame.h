#ifndef ASCII_ART_IMAGEFRAME_H_320C61417D2C474885EFB0C7197C85F8
#define ASCII_ART_IMAGEFRAME_H_320C61417D2C474885EFB0C7197C85F8


#include "Frame.h"
#include "../../container/Matrix.h"

// TODO: rename class to more general name
class ImageFrame : public Frame {
  public:
    explicit ImageFrame(Matrix<Color> pixels);
    ~ImageFrame() override = default;

    std::shared_ptr<Frame> clone() const override;

    // should be virtual method instead
    Matrix<Color> m_pixels;

  protected:
    void GetSize() override;

    Color GetPixel(Vector vector) override;

    void SetPixel(Vector vector, Color color) override;

};


#endif //ASCII_ART_IMAGEFRAME_H_320C61417D2C474885EFB0C7197C85F8
