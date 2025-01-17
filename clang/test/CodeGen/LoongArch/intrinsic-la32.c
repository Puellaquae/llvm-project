// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple loongarch32 -target-feature +f -O2 -emit-llvm %s -o - \
// RUN:     | FileCheck %s -check-prefix=LA32

#include <larchintrin.h>

// LA32-LABEL: @dbar(
// LA32-NEXT:  entry:
// LA32-NEXT:    tail call void @llvm.loongarch.dbar(i32 0)
// LA32-NEXT:    tail call void @llvm.loongarch.dbar(i32 0)
// LA32-NEXT:    ret void
//
void dbar() {
  __dbar(0);
  __builtin_loongarch_dbar(0);
}

// LA32-LABEL: @ibar(
// LA32-NEXT:  entry:
// LA32-NEXT:    tail call void @llvm.loongarch.ibar(i32 0)
// LA32-NEXT:    tail call void @llvm.loongarch.ibar(i32 0)
// LA32-NEXT:    ret void
//
void ibar() {
  __ibar(0);
  __builtin_loongarch_ibar(0);
}

// LA32-LABEL: @loongarch_break(
// LA32-NEXT:  entry:
// LA32-NEXT:    tail call void @llvm.loongarch.break(i32 1)
// LA32-NEXT:    tail call void @llvm.loongarch.break(i32 1)
// LA32-NEXT:    ret void
//
void loongarch_break() {
  __break(1);
  __builtin_loongarch_break(1);
}

// LA32-LABEL: @syscall(
// LA32-NEXT:  entry:
// LA32-NEXT:    tail call void @llvm.loongarch.syscall(i32 1)
// LA32-NEXT:    tail call void @llvm.loongarch.syscall(i32 1)
// LA32-NEXT:    ret void
//
void syscall() {
  __syscall(1);
  __builtin_loongarch_syscall(1);
}

// LA32-LABEL: @csrrd_w(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.csrrd.w(i32 1)
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.csrrd.w(i32 1)
// LA32-NEXT:    ret i32 0
//
unsigned int csrrd_w() {
  unsigned int a = __csrrd_w(1);
  unsigned int b = __builtin_loongarch_csrrd_w(1);
  return 0;
}

// LA32-LABEL: @csrwr_w(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.csrwr.w(i32 [[A:%.*]], i32 1)
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.csrwr.w(i32 [[A]], i32 1)
// LA32-NEXT:    ret i32 0
//
unsigned int csrwr_w(unsigned int a) {
  unsigned int b = __csrwr_w(a, 1);
  unsigned int c = __builtin_loongarch_csrwr_w(a, 1);
  return 0;
}

// LA32-LABEL: @csrxchg_w(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.csrxchg.w(i32 [[A:%.*]], i32 [[B:%.*]], i32 1)
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.csrxchg.w(i32 [[A]], i32 [[B]], i32 1)
// LA32-NEXT:    ret i32 0
//
unsigned int csrxchg_w(unsigned int a, unsigned int b) {
  unsigned int c = __csrxchg_w(a, b, 1);
  unsigned int d = __builtin_loongarch_csrxchg_w(a, b, 1);
  return 0;
}

// LA32-LABEL: @iocsrrd_b(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.b(i32 [[A:%.*]])
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.b(i32 [[A]])
// LA32-NEXT:    ret i8 0
//
unsigned char iocsrrd_b(unsigned int a) {
  unsigned char b = __iocsrrd_b(a);
  unsigned char c = __builtin_loongarch_iocsrrd_b(a);
  return 0;
}

// LA32-LABEL: @iocsrrd_h(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A:%.*]])
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A]])
// LA32-NEXT:    ret i16 0
//
unsigned short iocsrrd_h(unsigned int a) {
  unsigned short b = __iocsrrd_h(a);
  unsigned short c = __builtin_loongarch_iocsrrd_h(a);
  return 0;
}

// LA32-LABEL: @iocsrrd_w(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.w(i32 [[A:%.*]])
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.w(i32 [[A]])
// LA32-NEXT:    ret i32 0
//
unsigned int iocsrrd_w(unsigned int a) {
  unsigned int b = __iocsrrd_w(a);
  unsigned int c = __builtin_loongarch_iocsrrd_w(a);
  return 0;
}

// LA32-LABEL: @iocsrwr_b(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[CONV_I:%.*]] = zext i8 [[A:%.*]] to i32
// LA32-NEXT:    tail call void @llvm.loongarch.iocsrwr.b(i32 [[CONV_I]], i32 [[B:%.*]])
// LA32-NEXT:    tail call void @llvm.loongarch.iocsrwr.b(i32 [[CONV_I]], i32 [[B]])
// LA32-NEXT:    ret void
//
void iocsrwr_b(unsigned char a, unsigned int b) {
  __iocsrwr_b(a, b);
  __builtin_loongarch_iocsrwr_b(a, b);
}

// LA32-LABEL: @iocsrwr_h(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[CONV_I:%.*]] = zext i16 [[A:%.*]] to i32
// LA32-NEXT:    tail call void @llvm.loongarch.iocsrwr.h(i32 [[CONV_I]], i32 [[B:%.*]])
// LA32-NEXT:    tail call void @llvm.loongarch.iocsrwr.h(i32 [[CONV_I]], i32 [[B]])
// LA32-NEXT:    ret void
//
void iocsrwr_h(unsigned short a, unsigned int b) {
  __iocsrwr_h(a, b);
  __builtin_loongarch_iocsrwr_h(a, b);
}

// LA32-LABEL: @iocsrwr_w(
// LA32-NEXT:  entry:
// LA32-NEXT:    tail call void @llvm.loongarch.iocsrwr.w(i32 [[A:%.*]], i32 [[B:%.*]])
// LA32-NEXT:    tail call void @llvm.loongarch.iocsrwr.w(i32 [[A]], i32 [[B]])
// LA32-NEXT:    ret void
//
void iocsrwr_w(unsigned int a, unsigned int b) {
  __iocsrwr_w(a, b);
  __builtin_loongarch_iocsrwr_w(a, b);
}

// LA32-LABEL: @cpucfg(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.cpucfg(i32 [[A:%.*]])
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.cpucfg(i32 [[A]])
// LA32-NEXT:    ret i32 0
//
unsigned int cpucfg(unsigned int a) {
  unsigned int b = __cpucfg(a);
  unsigned int c = __builtin_loongarch_cpucfg(a);
  return 0;
}

// LA32-LABEL: @rdtime(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call { i32, i32 } asm sideeffect "rdtimeh.w $0, $1\0A\09", "=&r,=&r"() #[[ATTR1:[0-9]+]], !srcloc [[META2:![0-9]+]]
// LA32-NEXT:    [[TMP1:%.*]] = tail call { i32, i32 } asm sideeffect "rdtimel.w $0, $1\0A\09", "=&r,=&r"() #[[ATTR1]], !srcloc [[META3:![0-9]+]]
// LA32-NEXT:    ret void
//
void rdtime() {
  __rdtimeh_w();
  __rdtimel_w();
}

// LA32-LABEL: @loongarch_movfcsr2gr(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.movfcsr2gr(i32 1)
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.movfcsr2gr(i32 1)
// LA32-NEXT:    ret i32 0
//
int loongarch_movfcsr2gr() {
  int a =  __movfcsr2gr(1);
  int b = __builtin_loongarch_movfcsr2gr(1);
  return 0;
}

// LA32-LABEL: @loongarch_movgr2fcsr(
// LA32-NEXT:  entry:
// LA32-NEXT:    tail call void @llvm.loongarch.movgr2fcsr(i32 1, i32 [[A:%.*]])
// LA32-NEXT:    tail call void @llvm.loongarch.movgr2fcsr(i32 1, i32 [[A]])
// LA32-NEXT:    ret void
//
void loongarch_movgr2fcsr(int a) {
  __movgr2fcsr(1, a);
  __builtin_loongarch_movgr2fcsr(1, a);
}

// LA32-LABEL: @cacop_w(
// LA32-NEXT:  entry:
// LA32-NEXT:    tail call void @llvm.loongarch.cacop.w(i32 1, i32 [[A:%.*]], i32 1024)
// LA32-NEXT:    tail call void @llvm.loongarch.cacop.w(i32 1, i32 [[A]], i32 1024)
// LA32-NEXT:    ret void
//
void cacop_w(unsigned long int a) {
  __cacop_w(1, a, 1024);
  __builtin_loongarch_cacop_w(1, a, 1024);
}

// LA32-LABEL: @iocsrrd_h_result(
// LA32-NEXT:  entry:
// LA32-NEXT:    [[TMP0:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A:%.*]])
// LA32-NEXT:    [[TMP1:%.*]] = tail call i32 @llvm.loongarch.iocsrrd.h(i32 [[A]])
// LA32-NEXT:    [[CONV2:%.*]] = and i32 [[TMP0]], 255
// LA32-NEXT:    [[ADD:%.*]] = add i32 [[TMP1]], [[CONV2]]
// LA32-NEXT:    [[CONV4:%.*]] = trunc i32 [[ADD]] to i16
// LA32-NEXT:    ret i16 [[CONV4]]
//
unsigned short iocsrrd_h_result(unsigned int a) {
  unsigned short b = __iocsrrd_h(a);
  unsigned short c = __builtin_loongarch_iocsrrd_h(a);
  return b+c;
}
