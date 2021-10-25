#pragma once
#include <string>
#include "ColorBuffer.h"
#include "Renderer.h"

class Image
{
	friend class Framebuffer;
public:
	bool Load(const std::string& filename, uint8_t alpha);
	void Flip();

public:
	ColorBuffer colorBuffer;


};