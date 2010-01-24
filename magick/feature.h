/*
  Copyright 1999-2010 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.
  obtain a copy of the License at
  
    http://www.imagemagick.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  MagickCore feature methods.
*/
#ifndef _MAGICKCORE_FEATURE_H
#define _MAGICKCORE_FEATURE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Haralick texture features.
*/
typedef struct _ChannelFeatures
{
  double
    angular_second_momentum[4],
    contrast[4],
    correlation[4],
    variance_sum_of_squares[4],
    inverse_difference_moment[4],
    average_sum[4],
    variance_sum[4],
    entropy_sum[4],
    entropy[4],
    variance_difference[4],
    entropy_difference[4],
    correlation_measure_1[4],
    correlation_measure_2[4],
    maximum_correlation_coefficient[4];
} ChannelFeatures;

extern MagickExport ChannelFeatures
  *GetImageChannelFeatures(const Image *,ExceptionInfo *);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
