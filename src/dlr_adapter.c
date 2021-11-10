#include "dlr.h"

int CreateDLRModel2(DLRModelHandle* handle, const char* model_path, int dev_type, int dev_id) {
  int res = CreateDLRModel(handle, model_path, dev_type, dev_id);
  return res;
}

