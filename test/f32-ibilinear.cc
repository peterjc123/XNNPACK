// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-ibilinear.yaml
//   Generator: tools/generate-ibilinear-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/ibilinear.h>
#include "ibilinear-microkernel-tester.h"


TEST(F32_IBILINEAR__SCALAR_C1, channels_eq_1) {
  IBilinearMicrokernelTester()
    .pixels(1)
    .channels(1)
    .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c1);
}

TEST(F32_IBILINEAR__SCALAR_C1, channels_gt_1) {
  for (size_t channels = 2; channels < 10; channels++) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c1);
  }
}

TEST(F32_IBILINEAR__SCALAR_C1, pixels_gt_1) {
  for (size_t pixels = 2; pixels < 3; pixels++) {
    for (size_t channels = 1; channels <= 5; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c1);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_C1, input_offset) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 5; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .input_offset(7)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c1);
    }
  }
}
TEST(F32_IBILINEAR__SCALAR_C1, output_stride) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 5; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .output_stride(7)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c1);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P1, channels_eq_1) {
  IBilinearMicrokernelTester()
    .pixels(1)
    .channels(1)
    .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p1);
}

TEST(F32_IBILINEAR__SCALAR_P1, channels_gt_1) {
  for (size_t channels = 2; channels < 10; channels++) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p1);
  }
}

TEST(F32_IBILINEAR__SCALAR_P1, pixels_gt_1) {
  for (size_t pixels = 2; pixels < 3; pixels++) {
    for (size_t channels = 1; channels <= 5; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p1);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P1, input_offset) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 5; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .input_offset(7)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p1);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P1, output_stride) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 5; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .output_stride(7)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p1);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_C2, channels_eq_2) {
  IBilinearMicrokernelTester()
    .pixels(1)
    .channels(2)
    .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c2);
}

TEST(F32_IBILINEAR__SCALAR_C2, channels_div_2) {
  for (size_t channels = 4; channels < 20; channels += 2) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c2);
  }
}

TEST(F32_IBILINEAR__SCALAR_C2, channels_lt_2) {
  for (size_t channels = 1; channels < 2; channels++) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c2);
  }
}

TEST(F32_IBILINEAR__SCALAR_C2, channels_gt_2) {
  for (size_t channels = 3; channels < 4; channels++) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c2);
  }
}

TEST(F32_IBILINEAR__SCALAR_C2, pixels_gt_1) {
  for (size_t pixels = 2; pixels < 3; pixels++) {
    for (size_t channels = 1; channels <= 10; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c2);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_C2, input_offset) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 10; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .input_offset(13)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c2);
    }
  }
}
TEST(F32_IBILINEAR__SCALAR_C2, output_stride) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 10; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .output_stride(13)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c2);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P2, pixels_eq_2) {
  IBilinearMicrokernelTester()
    .pixels(2)
    .channels(1)
    .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p2);
}

TEST(F32_IBILINEAR__SCALAR_P2, pixels_div_2) {
  for (size_t pixels = 4; pixels < 20; pixels += 2) {
    IBilinearMicrokernelTester()
      .pixels(pixels)
      .channels(1)
      .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p2);
  }
}

TEST(F32_IBILINEAR__SCALAR_P2, pixels_lt_2) {
  for (size_t pixels = 1; pixels < 2; pixels++) {
    IBilinearMicrokernelTester()
      .pixels(pixels)
      .channels(1)
      .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p2);
  }
}

TEST(F32_IBILINEAR__SCALAR_P2, pixels_gt_2) {
  for (size_t pixels = 3; pixels < 4; pixels++) {
    IBilinearMicrokernelTester()
      .pixels(pixels)
      .channels(1)
      .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p2);
  }
}

TEST(F32_IBILINEAR__SCALAR_P2, channels_gt_1) {
  for (size_t pixels = 2; pixels < 3; pixels++) {
    for (size_t channels = 1; channels <= 10; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p2);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P2, input_offset) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 10; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .input_offset(13)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p2);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P2, output_stride) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 10; channels += 1) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .output_stride(13)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p2);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_C4, channels_eq_4) {
  IBilinearMicrokernelTester()
    .pixels(1)
    .channels(4)
    .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c4);
}

TEST(F32_IBILINEAR__SCALAR_C4, channels_div_4) {
  for (size_t channels = 8; channels < 40; channels += 4) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c4);
  }
}

TEST(F32_IBILINEAR__SCALAR_C4, channels_lt_4) {
  for (size_t channels = 1; channels < 4; channels++) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c4);
  }
}

TEST(F32_IBILINEAR__SCALAR_C4, channels_gt_4) {
  for (size_t channels = 5; channels < 8; channels++) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(channels)
      .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c4);
  }
}

TEST(F32_IBILINEAR__SCALAR_C4, pixels_gt_1) {
  for (size_t pixels = 2; pixels < 3; pixels++) {
    for (size_t channels = 1; channels <= 20; channels += 3) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c4);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_C4, input_offset) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 20; channels += 3) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .input_offset(23)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c4);
    }
  }
}
TEST(F32_IBILINEAR__SCALAR_C4, output_stride) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 20; channels += 3) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .output_stride(23)
        .TestNHWC(xnn_f32_ibilinear_ukernel__scalar_c4);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P4, pixels_eq_4) {
  IBilinearMicrokernelTester()
    .pixels(4)
    .channels(1)
    .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p4);
}

TEST(F32_IBILINEAR__SCALAR_P4, pixels_div_4) {
  for (size_t pixels = 8; pixels < 40; pixels += 4) {
    IBilinearMicrokernelTester()
      .pixels(pixels)
      .channels(1)
      .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p4);
  }
}

TEST(F32_IBILINEAR__SCALAR_P4, pixels_lt_4) {
  for (size_t pixels = 1; pixels < 4; pixels++) {
    IBilinearMicrokernelTester()
      .pixels(pixels)
      .channels(1)
      .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p4);
  }
}

TEST(F32_IBILINEAR__SCALAR_P4, channels_gt_4) {
  for (size_t pixels = 5; pixels < 8; pixels++) {
    IBilinearMicrokernelTester()
      .pixels(pixels)
      .channels(1)
      .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p4);
  }
}

TEST(F32_IBILINEAR__SCALAR_P4, channels_gt_1) {
  for (size_t pixels = 2; pixels < 3; pixels++) {
    for (size_t channels = 1; channels <= 20; channels += 3) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p4);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P4, input_offset) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 20; channels += 3) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .input_offset(23)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p4);
    }
  }
}

TEST(F32_IBILINEAR__SCALAR_P4, output_stride) {
  for (size_t pixels = 1; pixels < 5; pixels += 1) {
    for (size_t channels = 1; channels <= 20; channels += 3) {
      IBilinearMicrokernelTester()
        .pixels(pixels)
        .channels(channels)
        .output_stride(23)
        .TestNCHW(xnn_f32_ibilinear_chw_ukernel__scalar_p4);
    }
  }
}

#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IBILINEAR__NEON_C4, channels_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(4)
      .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c4);
  }

  TEST(F32_IBILINEAR__NEON_C4, channels_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 8; channels < 40; channels += 4) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c4);
    }
  }

  TEST(F32_IBILINEAR__NEON_C4, channels_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels < 4; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c4);
    }
  }

  TEST(F32_IBILINEAR__NEON_C4, channels_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 5; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c4);
    }
  }

  TEST(F32_IBILINEAR__NEON_C4, pixels_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c4);
      }
    }
  }

  TEST(F32_IBILINEAR__NEON_C4, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c4);
      }
    }
  }
  TEST(F32_IBILINEAR__NEON_C4, output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IBILINEAR__NEON_C8, channels_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(8)
      .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c8);
  }

  TEST(F32_IBILINEAR__NEON_C8, channels_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 16; channels < 80; channels += 8) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c8);
    }
  }

  TEST(F32_IBILINEAR__NEON_C8, channels_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 1; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c8);
    }
  }

  TEST(F32_IBILINEAR__NEON_C8, channels_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t channels = 9; channels < 16; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c8);
    }
  }

  TEST(F32_IBILINEAR__NEON_C8, pixels_gt_1) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c8);
      }
    }
  }

  TEST(F32_IBILINEAR__NEON_C8, input_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c8);
      }
    }
  }
  TEST(F32_IBILINEAR__NEON_C8, output_stride) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neon_c8);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IBILINEAR__NEONFMA_C4, channels_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(4)
      .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c4);
  }

  TEST(F32_IBILINEAR__NEONFMA_C4, channels_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t channels = 8; channels < 40; channels += 4) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c4);
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C4, channels_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t channels = 1; channels < 4; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c4);
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C4, channels_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t channels = 5; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c4);
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C4, pixels_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c4);
      }
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C4, input_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c4);
      }
    }
  }
  TEST(F32_IBILINEAR__NEONFMA_C4, output_stride) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c4);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IBILINEAR__NEONFMA_C8, channels_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(8)
      .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c8);
  }

  TEST(F32_IBILINEAR__NEONFMA_C8, channels_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t channels = 16; channels < 80; channels += 8) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c8);
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C8, channels_lt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t channels = 1; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c8);
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C8, channels_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t channels = 9; channels < 16; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c8);
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C8, pixels_gt_1) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c8);
      }
    }
  }

  TEST(F32_IBILINEAR__NEONFMA_C8, input_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c8);
      }
    }
  }
  TEST(F32_IBILINEAR__NEONFMA_C8, output_stride) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__neonfma_c8);
      }
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IBILINEAR__SSE_C4, channels_eq_4) {
    TEST_REQUIRES_X86_SSE;
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(4)
      .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c4);
  }

  TEST(F32_IBILINEAR__SSE_C4, channels_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t channels = 8; channels < 40; channels += 4) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c4);
    }
  }

  TEST(F32_IBILINEAR__SSE_C4, channels_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t channels = 1; channels < 4; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c4);
    }
  }

  TEST(F32_IBILINEAR__SSE_C4, channels_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t channels = 5; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c4);
    }
  }

  TEST(F32_IBILINEAR__SSE_C4, pixels_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c4);
      }
    }
  }

  TEST(F32_IBILINEAR__SSE_C4, input_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c4);
      }
    }
  }
  TEST(F32_IBILINEAR__SSE_C4, output_stride) {
    TEST_REQUIRES_X86_SSE;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c4);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IBILINEAR__SSE_C8, channels_eq_8) {
    TEST_REQUIRES_X86_SSE;
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(8)
      .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c8);
  }

  TEST(F32_IBILINEAR__SSE_C8, channels_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t channels = 16; channels < 80; channels += 8) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c8);
    }
  }

  TEST(F32_IBILINEAR__SSE_C8, channels_lt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t channels = 1; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c8);
    }
  }

  TEST(F32_IBILINEAR__SSE_C8, channels_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t channels = 9; channels < 16; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c8);
    }
  }

  TEST(F32_IBILINEAR__SSE_C8, pixels_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c8);
      }
    }
  }

  TEST(F32_IBILINEAR__SSE_C8, input_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c8);
      }
    }
  }
  TEST(F32_IBILINEAR__SSE_C8, output_stride) {
    TEST_REQUIRES_X86_SSE;
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__sse_c8);
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASMSIMD
  TEST(F32_IBILINEAR__WASMSIMD_C4, channels_eq_4) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(4)
      .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c4);
  }

  TEST(F32_IBILINEAR__WASMSIMD_C4, channels_div_4) {
    for (size_t channels = 8; channels < 40; channels += 4) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c4);
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C4, channels_lt_4) {
    for (size_t channels = 1; channels < 4; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c4);
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C4, channels_gt_4) {
    for (size_t channels = 5; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c4);
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C4, pixels_gt_1) {
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c4);
      }
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C4, input_offset) {
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c4);
      }
    }
  }
  TEST(F32_IBILINEAR__WASMSIMD_C4, output_stride) {
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 20; channels += 3) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(23)
          .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c4);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD


#if XNN_ARCH_WASMSIMD
  TEST(F32_IBILINEAR__WASMSIMD_C8, channels_eq_8) {
    IBilinearMicrokernelTester()
      .pixels(1)
      .channels(8)
      .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c8);
  }

  TEST(F32_IBILINEAR__WASMSIMD_C8, channels_div_8) {
    for (size_t channels = 16; channels < 80; channels += 8) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c8);
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C8, channels_lt_8) {
    for (size_t channels = 1; channels < 8; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c8);
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C8, channels_gt_8) {
    for (size_t channels = 9; channels < 16; channels++) {
      IBilinearMicrokernelTester()
        .pixels(1)
        .channels(channels)
        .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c8);
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C8, pixels_gt_1) {
    for (size_t pixels = 2; pixels < 3; pixels++) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c8);
      }
    }
  }

  TEST(F32_IBILINEAR__WASMSIMD_C8, input_offset) {
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .input_offset(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c8);
      }
    }
  }
  TEST(F32_IBILINEAR__WASMSIMD_C8, output_stride) {
    for (size_t pixels = 1; pixels < 5; pixels += 1) {
      for (size_t channels = 1; channels <= 40; channels += 7) {
        IBilinearMicrokernelTester()
          .pixels(pixels)
          .channels(channels)
          .output_stride(43)
          .TestNHWC(xnn_f32_ibilinear_ukernel__wasmsimd_c8);
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD
