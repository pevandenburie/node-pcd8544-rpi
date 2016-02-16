#include <node.h>
#include "../src/PCD8544.h"

namespace pcd8544_rpi {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void init(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}

void setcontrast(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}

void clear(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}

void drawstring(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}

void Initialize(Local<Object> exports) {
  NODE_SET_METHOD(exports, "init", init);
  NODE_SET_METHOD(exports, "setcontrast", setcontrast);
  NODE_SET_METHOD(exports, "clear", clear);
  NODE_SET_METHOD(exports, "drawstring", drawstring);
}

NODE_MODULE(pcd8544_rpi, Initialize)


// #include <node.h>
// #include <v8.h>
//
// using namespace v8;
//
// Handle<Value> Method(const Arguments& args) {
//   HandleScope scope;
//   return scope.Close(String::New("world"));
// }
//
// void init(Handle<Object> target) {
//   target->Set(String::NewSymbol("hello"),
//       FunctionTemplate::New(Method)->GetFunction());
// }
// NODE_MODULE(hello, init)

}  // namespace pcd8544_rpi
