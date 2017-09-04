#include "header.h"

/ Example one. Normalizing AOS vectors

// Scalar
inline void normalize(std::vector<vec3>& data)
{
  for (int i=0;i<data.size();i++)
  {
    vec3& m = data[i];
    m /= sqrtf( m[0]*m[0] + m[1]*m[1] + m[2]*m[2] );
  }
}

// SSE
inline void normalize(std::vector<mat4x3>& data)
{
  for (int i=0;i<data.size();i++)
  {
    vec4 mx = data[i][0];
    vec4 my = data[i][1];
    vec4 mz = data[i][2];

    vec4 multiplier = 1.0f/Sqrt(mx*mx + my*my + mz*mz);
    mx*=multiplier;
    my*=multiplier;
    mz*=multiplier;

    data[i][0]=mx;
    data[i][1]=my;
    data[i][2]=mz;
  }
}
