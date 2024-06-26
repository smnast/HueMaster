#ifndef HUEMASTER_IMAGE_H
#define HUEMASTER_IMAGE_H

#include <vector>
#include <string>
#include <opencv2/opencv.hpp>
#include <filesystem>

#include "color.h"

class Image {
public:
    explicit Image(const std::string &path);

    [[nodiscard]] std::vector<Color> get_dominant_colors() const;
    [[nodiscard]] float calculate_mean_luminance() const;

    void resize(int width, int height);

    [[nodiscard]] bool is_light() const;
private:
    cv::Mat image;
};

#endif //HUEMASTER_IMAGE_H
