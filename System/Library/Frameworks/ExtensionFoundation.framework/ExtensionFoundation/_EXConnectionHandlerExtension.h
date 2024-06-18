@protocol _EXConnectionHandler;

@interface _EXConnectionHandlerExtension : _EXExtension

@property (retain) id principalObject;
@property (retain) id<_EXConnectionHandler> connectionHandler;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void).cxx_destruct;
- (void)willFinishLaunching;
- (BOOL)loadDelegateWithClass:(Class)a0;
- (void)didFinishLaunching;

@end
