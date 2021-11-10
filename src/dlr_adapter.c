#include <stdio.h>
#include <time.h>
#include "dlr.h"

#define TICK(X) clock_t X = clock()
#define TOCK(X, MM) printf("time %s: %g ms.\n", (#MM), (double)(clock() - (X)) / (CLOCKS_PER_SEC / 1000.0))

int CreateDLRModelTT(DLRModelHandle* handle, const char* model_path, int dev_type, int dev_id) {
  TICK(TT);
  int res = CreateDLRModel(handle, model_path, dev_type, dev_id);
  TOCK(TT, CreateDLRModel);
  return res;
}

int DeleteDLRModelTT(DLRModelHandle* handle) {
  TICK(TT);
  int res = DeleteDLRModel(handle);
  TOCK(TT, DeleteDLRModel);
  return res;
}

int RunDLRModelTT(DLRModelHandle* handle) {
  TICK(TT);
  int res = RunDLRModel(handle);
  TOCK(TT, RunDLRModel);
  return res;
}

int GetDLRNumInputsTT(DLRModelHandle* handle, int* num_inputs) {
  TICK(TT);
  int res = GetDLRNumInputs(handle, num_inputs);
  TOCK(TT, GetDLRNumInputs);
  return res;
}

int SetDLRInputTT(DLRModelHandle* handle, const char* name, const int64_t* shape, const void* input, int dim){
  TICK(TT);
  int res = SetDLRInput(handle, name, shape, input, dim);
  TOCK(TT, SetDLRInput);
  return res;
}

int GetDLRInputSizeDimTT(DLRModelHandle* handle, int index, int64_t* size, int* dim) {
  TICK(TT);
  int res = GetDLRInputSizeDim(handle, index, size, dim);
  TOCK(TT, GetDLRInputSizeDim);
  return res;
}

int GetDLROutputShapeTT(DLRModelHandle* handle, int index, int64_t* shape) {
  TICK(TT);
  int res = GetDLROutputShape(handle, index, shape);
  TOCK(TT, GetDLROutputShape);
  return res;
}

int GetDLROutputTT(DLRModelHandle* handle, int index, void* out) {
  TICK(TT);
  int res = GetDLROutput(handle, index, out);
  TOCK(TT, GetDLROutput);
  return res;
}

int GetDLROutputPtrTT(DLRModelHandle* handle, int index, const void** out) {
  TICK(TT);
  int res = GetDLROutputPtr(handle, index, out);
  TOCK(TT, GetDLROutputPtr);
  return res;
}

int GetDLRNumOutputsTT(DLRModelHandle* handle, int* num_outputs) {
  TICK(TT);
  int res = GetDLRNumOutputs(handle, num_outputs);
  TOCK(TT, GetDLRNumOutputs);
  return res;
}

int GetDLROutputSizeDimTT(DLRModelHandle* handle, int index, int64_t* size, int* dim) {
  TICK(TT);
  int res = GetDLROutputSizeDim(handle, index, size, dim);
  TOCK(TT, GetDLROutputSizeDim);
  return res;
}

int GetDLROutputTypeTT(DLRModelHandle* handle, int index, const char** output_type) {
  TICK(TT);
  int res = GetDLROutputType(handle, index, output_type);
  TOCK(TT, GetDLROutputType);
  return res;
}

int GetDLROutputNameTT(DLRModelHandle* handle, const int index, const char** name) {
  TICK(TT);
  int res = GetDLROutputName(handle, index, name);
  TOCK(TT, GetDLROutputName);
  return res;
}

int GetDLROutputIndexTT(DLRModelHandle* handle, const char* name, int* index) {
  TICK(TT);
  int res = GetDLROutputIndex(handle, name, index);
  TOCK(TT, GetDLROutputIndex);
  return res;
}

int GetDLROutputByNameTT(DLRModelHandle* handle, const char* name, void* out) {
  TICK(TT);
  int res = GetDLROutputByName(handle, name, out);
  TOCK(TT, GetDLROutputByName);
  return res;
}
