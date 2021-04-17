 Raycasting vs Raytracing
===========
### 1. Raycasting
Raycasting is a technique for calculating 3D synthetic images, easily accelerated materially by a dedicated graphics card.

It was used successfully in the early 1990s in video games like Wolfenstein 3D or Doom. The implementation was then entirely software and did not call for specific hardware.

- Rays plotted in groups (pixel line by pixel line)
- As much rays as the width of the screen (if resolution 320x200 -> 320 rays will be sent)
- Fast rendering
- Unrealistic images

## 2. Raytracing

Ray tracing is a computer optics calculation technique, used for image synthesis rendering or for studies of optical systems. 

 It consists in simulating the reverse path of light: we calculate the lighting from the camera to the objects and then to the lights, whereas in reality the light goes from the scene to the eye.

- Rays plotted one by one (pixel by pixel)
- As much rays as the width x height of the screen (if resolution 320x200 -> 64000 rays will be sent)
- Slow rendering
- So realistic images
- Unusable for real-time rendering

## 3. Limitations

- Walls will always be perpendicular to the ground
- Ground will always be flat
- Walls will be cubes of same size
