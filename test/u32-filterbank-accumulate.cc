// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/u32-filterbank-accumulate.yaml
//   Generator: tools/generate-filterbank-accumulate-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/filterbank.h>
#include "filterbank-accumulate-microkernel-tester.h"


#if XNN_ARCH_ARM
  TEST(U32_FILTERBANK_ACCUMULATE__AARCH32_NEON_X1, rows_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(1)
      .Test(xnn_u32_filterbank_accumulate_ukernel__aarch32_neon_x1);
  }

  TEST(U32_FILTERBANK_ACCUMULATE__AARCH32_NEON_X1, rows_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(2)
      .Test(xnn_u32_filterbank_accumulate_ukernel__aarch32_neon_x1);
  }
#endif  // XNN_ARCH_ARM


#if XNN_ARCH_ARM
  TEST(U32_FILTERBANK_ACCUMULATE__AARCH32_NEON_X2, rows_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(1)
      .Test(xnn_u32_filterbank_accumulate_ukernel__aarch32_neon_x2);
  }

  TEST(U32_FILTERBANK_ACCUMULATE__AARCH32_NEON_X2, rows_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(2)
      .Test(xnn_u32_filterbank_accumulate_ukernel__aarch32_neon_x2);
  }
#endif  // XNN_ARCH_ARM


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(U32_FILTERBANK_ACCUMULATE__NEON_X1, rows_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(1)
      .Test(xnn_u32_filterbank_accumulate_ukernel__neon_x1);
  }

  TEST(U32_FILTERBANK_ACCUMULATE__NEON_X1, rows_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(2)
      .Test(xnn_u32_filterbank_accumulate_ukernel__neon_x1);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(U32_FILTERBANK_ACCUMULATE__NEON_X2, rows_eq_1) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(1)
      .Test(xnn_u32_filterbank_accumulate_ukernel__neon_x2);
  }

  TEST(U32_FILTERBANK_ACCUMULATE__NEON_X2, rows_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    FilterbankAccumulateMicrokernelTester()
      .rows(2)
      .Test(xnn_u32_filterbank_accumulate_ukernel__neon_x2);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


TEST(U32_FILTERBANK_ACCUMULATE__SCALAR_X1, rows_eq_1) {
  FilterbankAccumulateMicrokernelTester()
    .rows(1)
    .Test(xnn_u32_filterbank_accumulate_ukernel__scalar_x1);
}

TEST(U32_FILTERBANK_ACCUMULATE__SCALAR_X1, rows_eq_2) {
  FilterbankAccumulateMicrokernelTester()
    .rows(2)
    .Test(xnn_u32_filterbank_accumulate_ukernel__scalar_x1);
}
