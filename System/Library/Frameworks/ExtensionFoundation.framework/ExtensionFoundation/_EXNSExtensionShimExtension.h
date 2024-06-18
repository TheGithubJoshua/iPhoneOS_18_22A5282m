@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void).cxx_destruct;
- (void)willFinishLaunching;
- (BOOL)loadDelegateWithClass:(Class)a0;
- (void)didFinishLaunching;

@end
