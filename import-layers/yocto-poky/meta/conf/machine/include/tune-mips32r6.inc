DEFAULTTUNE ?= "mipsisa32r6el"

require conf/machine/include/mips/arch-mips.inc

TUNEVALID[mipsisa32r6] = "Enable mipsisa32r6 specific processor optimizations"
TUNECONFLICTS[mipsisa32r6] = "n64 n32"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'mipsisa32r6', ' -march=mips32r6', '', d)}"

# Base Tunes
AVAILTUNES += "mipsisa32r6 mipsisa32r6el"

TUNE_FEATURES_tune-mipsisa32r6 = "bigendian mipsisa32r6 fpu-hard r6"
MIPSPKGSFX_VARIANT_tune-mipsisa32r6 = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-mipsisa32r6 = "mipsisa32r6"

TUNE_FEATURES_tune-mipsisa32r6el = "fpu-hard mipsisa32r6 r6"
MIPSPKGSFX_VARIANT_tune-mipsisa32r6el = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-mipsisa32r6el = "mipsisa32r6el"

# Soft Float
AVAILTUNES += "mipsisa32r6-nf mipsisa32r6el-nf"

TUNE_FEATURES_tune-mipsisa32r6-nf = "bigendian mipsisa32r6 r6"
MIPSPKGSFX_VARIANT_tune-mipsisa32r6-nf = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-mipsisa32r6-nf = "mipsisa32r6-nf"

TUNE_FEATURES_tune-mipsisa32r6el-nf = "mipsisa32r6 r6"
MIPSPKGSFX_VARIANT_tune-mipsisa32r6el-nf = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-mipsisa32r6el-nf = "mipsisa32r6el-nf"
