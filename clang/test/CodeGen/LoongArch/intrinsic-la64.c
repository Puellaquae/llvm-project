// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple loongarch64 -target-feature +f -O2 -emit-llvm %s -o - | FileCheck %s

#include <larchintrin.h>

// CHECK-LABEL: @dbar(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.dbar(i32 0)
// CHECK-NEXT:    tail call void @llvm.loongarch.dbar(i32 0)
// CHECK-NEXT:    ret void
//
void dbar() {
  __dbar(0);
  __builtin_loongarch_dbar(0);
}

// CHECK-LABEL: @ibar(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.ibar(i32 0)
// CHECK-NEXT:    tail call void @llvm.loongarch.ibar(i32 0)
// CHECK-NEXT:    ret void
//
void ibar() {
  __ibar(0);
  __builtin_loongarch_ibar(0);
}

// CHECK-LABEL: @loongarch_break(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.break(i32 1)
// CHECK-NEXT:    tail call void @llvm.loongarch.break(i32 1)
// CHECK-NEXT:    ret void
//
void loongarch_break() {
  __break(1);
  __builtin_loongarch_break(1);
}

// CHECK-LABEL: @syscall(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.syscall(i32 1)
// CHECK-NEXT:    tail call void @llvm.loongarch.syscall(i32 1)
// CHECK-NEXT:    ret void
//
void syscall() {
  __syscall(1);
  __builtin_loongarch_syscall(1);
}

// CHECK-LABEL: @csrrd_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.csrrd.w(i32 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.csrrd.w(i32 1)
// CHECK-NEXT:    ret i32 0
//
unsigned int csrrd_w() {
  unsigned int a = __csrrd_w(1);
  unsigned int b = __builtin_loongarch_csrrd_w(1);
  return 0;
}

// CHECK-LABEL: @csrwr_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.csrwr.w(i32 [[A:%.*]], i32 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.csrwr.w(i32 [[A]], i32 1)
// CHECK-NEXT:    ret i32 0
//
unsigned int csrwr_w(unsigned int a) {
  unsigned int b = __csrwr_w(a, 1);
  unsigned int c = __builtin_loongarch_csrwr_w(a, 1);
  return 0;
}

// CHECK-LABEL: @csrxchg_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.csrxchg.w(i32 [[A:%.*]], i32 [[B:%.*]], i32 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.csrxchg.w(i32 [[A]], i32 [[B]], i32 1)
// CHECK-NEXT:    ret i32 0
//
unsigned int csrxchg_w(unsigned int a, unsigned int b) {
  unsigned int c = __csrxchg_w(a, b, 1);
  unsigned int d = __builtin_loongarch_csrxchg_w(a, b, 1);
  return 0;
}

// CHECK-LABEL: @crc_w_b_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = shl i32 [[A:%.*]], 24
// CHECK-NEXT:    [[CONV_I:%.*]] = ashr exact i32 [[TMP0]], 24
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crc.w.b.w(i32 [[CONV_I]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = tail call i32 @llvm.loongarch.crc.w.b.w(i32 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crc_w_b_w(int a, int b) {
  int c = __crc_w_b_w(a, b);
  int d = __builtin_loongarch_crc_w_b_w(a, b);
  return 0;
}

// CHECK-LABEL: @crc_w_h_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = shl i32 [[A:%.*]], 16
// CHECK-NEXT:    [[CONV_I:%.*]] = ashr exact i32 [[TMP0]], 16
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crc.w.h.w(i32 [[CONV_I]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = tail call i32 @llvm.loongarch.crc.w.h.w(i32 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crc_w_h_w(int a, int b) {
  int c = __crc_w_h_w(a, b);
  int d = __builtin_loongarch_crc_w_h_w(a, b);
  return 0;
}

// CHECK-LABEL: @crc_w_w_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.crc.w.w.w(i32 [[A:%.*]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crc.w.w.w(i32 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crc_w_w_w(int a, int b) {
  int c = __crc_w_w_w(a, b);
  int d = __builtin_loongarch_crc_w_w_w(a, b);
  return 0;
}

// CHECK-LABEL: @cacop_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.cacop.d(i64 1, i64 [[A:%.*]], i64 1024)
// CHECK-NEXT:    tail call void @llvm.loongarch.cacop.d(i64 1, i64 [[A]], i64 1024)
// CHECK-NEXT:    ret void
//
void cacop_d(unsigned long int a) {
  __cacop_d(1, a, 1024);
  __builtin_loongarch_cacop_d(1, a, 1024);
}

// CHECK-LABEL: @crc_w_d_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.crc.w.d.w(i64 [[A:%.*]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crc.w.d.w(i64 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crc_w_d_w(long int a, int b) {
  int c = __crc_w_d_w(a, b);
  int d = __builtin_loongarch_crc_w_d_w(a, b);
  return 0;
}

// CHECK-LABEL: @crcc_w_b_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = shl i32 [[A:%.*]], 24
// CHECK-NEXT:    [[CONV_I:%.*]] = ashr exact i32 [[TMP0]], 24
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crcc.w.b.w(i32 [[CONV_I]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = tail call i32 @llvm.loongarch.crcc.w.b.w(i32 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crcc_w_b_w(int a, int b) {
  int c = __crcc_w_b_w(a, b);
  int d = __builtin_loongarch_crcc_w_b_w(a, b);
  return 0;
}

// CHECK-LABEL: @crcc_w_h_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = shl i32 [[A:%.*]], 16
// CHECK-NEXT:    [[CONV_I:%.*]] = ashr exact i32 [[TMP0]], 16
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crcc.w.h.w(i32 [[CONV_I]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = tail call i32 @llvm.loongarch.crcc.w.h.w(i32 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crcc_w_h_w(int a, int b) {
  int c = __crcc_w_h_w(a, b);
  int d = __builtin_loongarch_crcc_w_h_w(a, b);
  return 0;
}

// CHECK-LABEL: @crcc_w_w_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.crcc.w.w.w(i32 [[A:%.*]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crcc.w.w.w(i32 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crcc_w_w_w(int a, int b) {
  int c = __crcc_w_w_w(a, b);
  int d = __builtin_loongarch_crcc_w_w_w(a, b);
  return 0;
}

// CHECK-LABEL: @crcc_w_d_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.crcc.w.d.w(i64 [[A:%.*]], i32 [[B:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.crcc.w.d.w(i64 [[A]], i32 [[B]])
// CHECK-NEXT:    ret i32 0
//
int crcc_w_d_w(long int a, int b) {
  int c = __crcc_w_d_w(a, b);
  int d = __builtin_loongarch_crcc_w_d_w(a, b);
  return 0;
}

// CHECK-LABEL: @csrrd_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i64 @llvm.loongarch.csrrd.d(i32 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i64 @llvm.loongarch.csrrd.d(i32 1)
// CHECK-NEXT:    ret i64 0
//
unsigned long int csrrd_d() {
  unsigned long int a = __csrrd_d(1);
  unsigned long int b = __builtin_loongarch_csrrd_d(1);
  return 0;
}

// CHECK-LABEL: @csrwr_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i64 @llvm.loongarch.csrwr.d(i64 [[A:%.*]], i32 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i64 @llvm.loongarch.csrwr.d(i64 [[A]], i32 1)
// CHECK-NEXT:    ret i64 0
//
unsigned long int csrwr_d(unsigned long int a) {
  unsigned long int b = __csrwr_d(a, 1);
  unsigned long int c = __builtin_loongarch_csrwr_d(a, 1);
  return 0;
}

// CHECK-LABEL: @csrxchg_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i64 @llvm.loongarch.csrxchg.d(i64 [[A:%.*]], i64 [[B:%.*]], i32 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i64 @llvm.loongarch.csrxchg.d(i64 [[A]], i64 [[B]], i32 1)
// CHECK-NEXT:    ret i64 0
//
unsigned long int csrxchg_d(unsigned long int a, unsigned long int b) {
  unsigned long int c = __csrxchg_d(a, b, 1);
  unsigned long int d = __builtin_loongarch_csrxchg_d(a, b, 1);
  return 0;
}

// CHECK-LABEL: @iocsrrd_b(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.b(i32 [[A:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.b(i32 [[A]])
// CHECK-NEXT:    ret i8 0
//
unsigned char iocsrrd_b(unsigned int a) {
  unsigned char b = __iocsrrd_b(a);
  unsigned char c = __builtin_loongarch_iocsrrd_b(a);
  return 0;
}

// CHECK-LABEL: @iocsrrd_h(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A]])
// CHECK-NEXT:    ret i16 0
//
unsigned short iocsrrd_h(unsigned int a) {
  unsigned short b = __iocsrrd_h(a);
  unsigned short c = __builtin_loongarch_iocsrrd_h(a);
  return 0;
}

// CHECK-LABEL: @iocsrrd_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.w(i32 [[A:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.w(i32 [[A]])
// CHECK-NEXT:    ret i32 0
//
unsigned int iocsrrd_w(unsigned int a) {
  unsigned int b = __iocsrrd_w(a);
  unsigned int c = __builtin_loongarch_iocsrrd_w(a);
  return 0;
}

// CHECK-LABEL: @iocsrwr_b(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[CONV_I:%.*]] = zext i8 [[A:%.*]] to i32
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.b(i32 [[CONV_I]], i32 [[B:%.*]])
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.b(i32 [[CONV_I]], i32 [[B]])
// CHECK-NEXT:    ret void
//
void iocsrwr_b(unsigned char a, unsigned int b) {
  __iocsrwr_b(a, b);
  __builtin_loongarch_iocsrwr_b(a, b);
}

// CHECK-LABEL: @iocsrwr_h(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[CONV_I:%.*]] = zext i16 [[A:%.*]] to i32
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.h(i32 [[CONV_I]], i32 [[B:%.*]])
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.h(i32 [[CONV_I]], i32 [[B]])
// CHECK-NEXT:    ret void
//
void iocsrwr_h(unsigned short a, unsigned int b) {
  __iocsrwr_h(a, b);
  __builtin_loongarch_iocsrwr_h(a, b);
}

// CHECK-LABEL: @iocsrwr_w(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.w(i32 [[A:%.*]], i32 [[B:%.*]])
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.w(i32 [[A]], i32 [[B]])
// CHECK-NEXT:    ret void
//
void iocsrwr_w(unsigned int a, unsigned int b) {
  __iocsrwr_w(a, b);
  __builtin_loongarch_iocsrwr_w(a, b);
}

// CHECK-LABEL: @iocsrrd_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i64 @llvm.loongarch.iocsrrd.d(i32 [[A:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i64 @llvm.loongarch.iocsrrd.d(i32 [[A]])
// CHECK-NEXT:    ret i64 0
//
unsigned long int iocsrrd_d(unsigned int a) {
  unsigned long int b = __iocsrrd_d(a);
  unsigned long int c = __builtin_loongarch_iocsrrd_d(a);
  return 0;
}

// CHECK-LABEL: @iocsrwr_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.d(i64 [[A:%.*]], i32 [[B:%.*]])
// CHECK-NEXT:    tail call void @llvm.loongarch.iocsrwr.d(i64 [[A]], i32 [[B]])
// CHECK-NEXT:    ret void
//
void iocsrwr_d(unsigned long int a, unsigned int b) {
  __iocsrwr_d(a, b);
  __builtin_loongarch_iocsrwr_d(a, b);
}

// CHECK-LABEL: @asrtle_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.asrtle.d(i64 [[A:%.*]], i64 [[B:%.*]])
// CHECK-NEXT:    tail call void @llvm.loongarch.asrtle.d(i64 [[A]], i64 [[B]])
// CHECK-NEXT:    ret void
//
void asrtle_d(long int a, long int b) {
  __asrtle_d(a, b);
  __builtin_loongarch_asrtle_d(a, b);
}

// CHECK-LABEL: @asrtgt_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.asrtgt.d(i64 [[A:%.*]], i64 [[B:%.*]])
// CHECK-NEXT:    tail call void @llvm.loongarch.asrtgt.d(i64 [[A]], i64 [[B]])
// CHECK-NEXT:    ret void
//
void asrtgt_d(long int a, long int b) {
  __asrtgt_d(a, b);
  __builtin_loongarch_asrtgt_d(a, b);
}

// CHECK-LABEL: @lddir_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i64 @llvm.loongarch.lddir.d(i64 [[A:%.*]], i64 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i64 @llvm.loongarch.lddir.d(i64 [[A]], i64 1)
// CHECK-NEXT:    ret i64 0
//
long int lddir_d(long int a) {
  long int b = __lddir_d(a, 1);
  long int c = __builtin_loongarch_lddir_d(a, 1);
  return 0;
}

// CHECK-LABEL: @ldpte_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.ldpte.d(i64 [[A:%.*]], i64 1)
// CHECK-NEXT:    tail call void @llvm.loongarch.ldpte.d(i64 [[A]], i64 1)
// CHECK-NEXT:    ret void
//
void ldpte_d(long int a) {
  __ldpte_d(a, 1);
  __builtin_loongarch_ldpte_d(a, 1);
}

// CHECK-LABEL: @cpucfg(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.cpucfg(i32 [[A:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.cpucfg(i32 [[A]])
// CHECK-NEXT:    ret i32 0
//
unsigned int cpucfg(unsigned int a) {
  unsigned int b = __cpucfg(a);
  unsigned int c = __builtin_loongarch_cpucfg(a);
  return 0;
}

// CHECK-LABEL: @rdtime_d(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call { i64, i64 } asm sideeffect "rdtime.d $0, $1\0A\09", "=&r,=&r"() #[[ATTR1:[0-9]+]], !srcloc [[META2:![0-9]+]]
// CHECK-NEXT:    ret void
//
void rdtime_d() {
  __rdtime_d();
}

// CHECK-LABEL: @rdtime(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call { i32, i32 } asm sideeffect "rdtimeh.w $0, $1\0A\09", "=&r,=&r"() #[[ATTR1]], !srcloc [[META3:![0-9]+]]
// CHECK-NEXT:    [[TMP1:%.*]] = tail call { i32, i32 } asm sideeffect "rdtimel.w $0, $1\0A\09", "=&r,=&r"() #[[ATTR1]], !srcloc [[META4:![0-9]+]]
// CHECK-NEXT:    ret void
//
void rdtime() {
  __rdtimeh_w();
  __rdtimel_w();
}

// CHECK-LABEL: @loongarch_movfcsr2gr(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.movfcsr2gr(i32 1)
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.movfcsr2gr(i32 1)
// CHECK-NEXT:    ret i32 0
//
int loongarch_movfcsr2gr() {
  int a =  __movfcsr2gr(1);
  int b = __builtin_loongarch_movfcsr2gr(1);
  return 0;
}

// CHECK-LABEL: @loongarch_movgr2fcsr(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    tail call void @llvm.loongarch.movgr2fcsr(i32 1, i32 [[A:%.*]])
// CHECK-NEXT:    tail call void @llvm.loongarch.movgr2fcsr(i32 1, i32 [[A]])
// CHECK-NEXT:    ret void
//
void loongarch_movgr2fcsr(int a) {
  __movgr2fcsr(1, a);
  __builtin_loongarch_movgr2fcsr(1, a);
}

// CHECK-LABEL: @iocsrrd_h_result(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A]])
// CHECK-NEXT:    [[CONV2:%.*]] = and i32 [[TMP0]], 255
// CHECK-NEXT:    [[ADD:%.*]] = add i32 [[TMP1]], [[CONV2]]
// CHECK-NEXT:    [[CONV4:%.*]] = trunc i32 [[ADD]] to i16
// CHECK-NEXT:    ret i16 [[CONV4]]
//
unsigned short iocsrrd_h_result(unsigned int a) {
  unsigned short b = __iocsrrd_h(a);
  unsigned short c = __builtin_loongarch_iocsrrd_h(a);
  return b+c;
}
