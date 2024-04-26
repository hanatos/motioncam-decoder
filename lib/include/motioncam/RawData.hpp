/*
 * Copyright 2023 MotionCam
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RawData_hpp
#define RawData_hpp

#include <stddef.h>
#include <cstdint>

namespace motioncam {
    namespace raw {
        size_t Decode(
            uint16_t* output,
            const int width,
            const int height,
            const uint8_t* input,
            const size_t len);
        size_t getEncoded(
            uint8_t *input, size_t len,
            uint16_t *out_bits,
            int out_bits_len,
            uint16_t *out_refs,
            int out_refs_len,
            uint8_t **out_data);
    }
}

#endif /* RawData_hpp */
