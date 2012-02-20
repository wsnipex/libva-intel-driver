/*
 * Copyright (C) 2006-2012 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef I965_DECODER_UTILS_H
#define I965_DECODER_UTILS_H

#include "i965_decoder.h"
#include "intel_batchbuffer.h"

void
avc_gen_default_iq_matrix(VAIQMatrixBufferH264 *iq_matrix);

void
gen5_fill_avc_ref_idx_state(
    uint8_t             state[32],
    const VAPictureH264 ref_list[32],
    unsigned int        ref_list_count,
    const GenFrameStore frame_store[MAX_GEN_REFERENCE_FRAMES]
);

void
gen6_send_avc_ref_idx_state(
    struct intel_batchbuffer         *batch,
    const VASliceParameterBufferH264 *slice_param,
    const GenFrameStore               frame_store[MAX_GEN_REFERENCE_FRAMES]
);

#endif /* I965_DECODER_UTILS_H */