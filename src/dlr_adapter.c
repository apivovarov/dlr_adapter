#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <time.h>
#include "dlr.h"

#define TICK(X) struct timespec X; clock_gettime(CLOCK_REALTIME, &X)
#define TOCK(X, X1, MM) struct timespec X1; clock_gettime(CLOCK_REALTIME, &X1);\
  printf("time %s: %g sec.\n", (#MM), (X1.tv_sec - X.tv_sec) + (X1.tv_nsec - X.tv_nsec) / 1e9)

int CreateDLRModelTT(DLRModelHandle* handle, const char* model_path, int dev_type, int dev_id) {
  TICK(TT);
  int res = CreateDLRModel(handle, model_path, dev_type, dev_id);
  TOCK(TT, TT1, CreateDLRModel);
  return res;
}

int DeleteDLRModelTT(DLRModelHandle* handle) {
  TICK(TT);
  int res = DeleteDLRModel(handle);
  TOCK(TT, TT1, DeleteDLRModel);
  return res;
}

int RunDLRModelTT(DLRModelHandle* handle) {
  TICK(TT);
  int res = RunDLRModel(handle);
  TOCK(TT, TT1, RunDLRModel);
  return res;
}

int GetDLRNumInputsTT(DLRModelHandle* handle, int* num_inputs) {
  TICK(TT);
  int res = GetDLRNumInputs(handle, num_inputs);
  TOCK(TT, TT1, GetDLRNumInputs);
  return res;
}

int SetDLRInputTT(DLRModelHandle* handle, const char* name, const int64_t* shape, const void* input, int dim){
  TICK(TT);
  int res = SetDLRInput(handle, name, shape, input, dim);
  TOCK(TT, TT1, SetDLRInput);
  return res;
}

int GetDLRInputSizeDimTT(DLRModelHandle* handle, int index, int64_t* size, int* dim) {
  TICK(TT);
  int res = GetDLRInputSizeDim(handle, index, size, dim);
  TOCK(TT, TT1, GetDLRInputSizeDim);
  return res;
}

int GetDLROutputShapeTT(DLRModelHandle* handle, int index, int64_t* shape) {
  TICK(TT);
  int res = GetDLROutputShape(handle, index, shape);
  TOCK(TT, TT1, GetDLROutputShape);
  return res;
}

int GetDLROutputTT(DLRModelHandle* handle, int index, void* out) {
  TICK(TT);
  int res = GetDLROutput(handle, index, out);
  TOCK(TT, TT1, GetDLROutput);
  return res;
}

int GetDLROutputPtrTT(DLRModelHandle* handle, int index, const void** out) {
  TICK(TT);
  int res = GetDLROutputPtr(handle, index, out);
  TOCK(TT, TT1, GetDLROutputPtr);
  return res;
}

int GetDLRNumOutputsTT(DLRModelHandle* handle, int* num_outputs) {
  TICK(TT);
  int res = GetDLRNumOutputs(handle, num_outputs);
  TOCK(TT, TT1, GetDLRNumOutputs);
  return res;
}

int GetDLROutputSizeDimTT(DLRModelHandle* handle, int index, int64_t* size, int* dim) {
  TICK(TT);
  int res = GetDLROutputSizeDim(handle, index, size, dim);
  TOCK(TT, TT1, GetDLROutputSizeDim);
  return res;
}

int GetDLROutputTypeTT(DLRModelHandle* handle, int index, const char** output_type) {
  TICK(TT);
  int res = GetDLROutputType(handle, index, output_type);
  TOCK(TT, TT1, GetDLROutputType);
  return res;
}

int GetDLROutputNameTT(DLRModelHandle* handle, const int index, const char** name) {
  TICK(TT);
  int res = GetDLROutputName(handle, index, name);
  TOCK(TT, TT1, GetDLROutputName);
  return res;
}

int GetDLROutputIndexTT(DLRModelHandle* handle, const char* name, int* index) {
  TICK(TT);
  int res = GetDLROutputIndex(handle, name, index);
  TOCK(TT, TT1, GetDLROutputIndex);
  return res;
}

int GetDLROutputByNameTT(DLRModelHandle* handle, const char* name, void* out) {
  TICK(TT);
  int res = GetDLROutputByName(handle, name, out);
  TOCK(TT, TT1, GetDLROutputByName);
  return res;
}
