#pragma once
#include "Libs.h"
#ifndef SOUNDBAR_H
#define SOUNDBAR_H

typedef struct {
    SDL_Rect barRect;
    SDL_Texture* barTexture;
}SoundBar;

SoundBar* createSoundBar(int x, int y, int barWidth, int barHeight, SDL_Renderer* r);
void updateSoundBar(SoundBar* soundBar, int volume);
void destroyBar(SoundBar* b);
#endif