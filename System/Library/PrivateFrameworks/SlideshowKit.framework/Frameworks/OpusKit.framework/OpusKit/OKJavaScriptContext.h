@interface OKJavaScriptContext : JSContext

- (void)setupControllers;
- (id)init;
- (void)setupConsole;
- (void)setupExceptionHandler;
- (void)setupTransitions;
- (void)setupWidgets;
- (void)setupActions;
- (void)setupConvenienceMethods;
- (void)dealloc;
- (void)setupNativeStructs;
- (void)setupOpus;
- (id)valueFromJSValue:(id)a0;
- (void)setupNativeObjects;
- (void)setupContentFilters;

@end
