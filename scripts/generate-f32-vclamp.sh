#!/bin/sh
# Copyright 2020 Google LLC
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree.

#################################### Scalar ###################################
### Generic C micro-kernels
tools/xngen src/f32-vclamp/scalar.c.in -D BATCH_TILE=1 -D WASM=0 -o src/f32-vclamp/gen/scalar-x1.c
tools/xngen src/f32-vclamp/scalar.c.in -D BATCH_TILE=2 -D WASM=0 -o src/f32-vclamp/gen/scalar-x2.c
tools/xngen src/f32-vclamp/scalar.c.in -D BATCH_TILE=4 -D WASM=0 -o src/f32-vclamp/gen/scalar-x4.c

### WAsm-specific micro-kernels
tools/xngen src/f32-vclamp/scalar.c.in -D BATCH_TILE=1 -D WASM=1 -o src/f32-vclamp/gen/wasm-x1.c
tools/xngen src/f32-vclamp/scalar.c.in -D BATCH_TILE=2 -D WASM=1 -o src/f32-vclamp/gen/wasm-x2.c
tools/xngen src/f32-vclamp/scalar.c.in -D BATCH_TILE=4 -D WASM=1 -o src/f32-vclamp/gen/wasm-x4.c

################################## WAsm SIMD ##################################
tools/xngen src/f32-vclamp/wasmsimd.c.in -D BATCH_TILE=4 -D X86=0 -o src/f32-vclamp/gen/wasmsimd-arm-x4.c
tools/xngen src/f32-vclamp/wasmsimd.c.in -D BATCH_TILE=8 -D X86=0 -o src/f32-vclamp/gen/wasmsimd-arm-x8.c

tools/xngen src/f32-vclamp/wasmsimd.c.in -D BATCH_TILE=4 -D X86=1 -o src/f32-vclamp/gen/wasmsimd-x86-x4.c
tools/xngen src/f32-vclamp/wasmsimd.c.in -D BATCH_TILE=8 -D X86=1 -o src/f32-vclamp/gen/wasmsimd-x86-x8.c

################################### ARM NEON ##################################
tools/xngen src/f32-vclamp/neon.c.in -D BATCH_TILE=4 -o src/f32-vclamp/gen/neon-x4.c
tools/xngen src/f32-vclamp/neon.c.in -D BATCH_TILE=8 -o src/f32-vclamp/gen/neon-x8.c

################################# x86 128-bit #################################
tools/xngen src/f32-vclamp/sse.c.in -D BATCH_TILE=4 -o src/f32-vclamp/gen/sse-x4.c
tools/xngen src/f32-vclamp/sse.c.in -D BATCH_TILE=8 -o src/f32-vclamp/gen/sse-x8.c

################################# x86 256-bit #################################
tools/xngen src/f32-vclamp/avx.c.in -D BATCH_TILE=8 -o src/f32-vclamp/gen/avx-x8.c
tools/xngen src/f32-vclamp/avx.c.in -D BATCH_TILE=16 -o src/f32-vclamp/gen/avx-x16.c

################################# x86 512-bit #################################
tools/xngen src/f32-vclamp/avx512f.c.in -D BATCH_TILE=16 -o src/f32-vclamp/gen/avx512f-x16.c
tools/xngen src/f32-vclamp/avx512f.c.in -D BATCH_TILE=32 -o src/f32-vclamp/gen/avx512f-x32.c

################################## Unit tests #################################
tools/generate-vclamp-test.py --spec test/f32-vclamp.yaml --output test/f32-vclamp.cc
