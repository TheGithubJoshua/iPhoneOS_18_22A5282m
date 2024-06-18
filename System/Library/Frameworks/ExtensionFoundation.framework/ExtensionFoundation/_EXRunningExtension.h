@class NSString, _EXExtension;
@protocol _EXExtensionConfigurationProviding;

@interface _EXRunningExtension : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) _EXExtension *extension;
@property (readonly) id<_EXExtensionConfigurationProviding> configuration;
@property (readonly) struct { unsigned int val[8]; } hostAuditToken;
@property (readonly) unsigned long long signpost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void /* function */ *)entryPointFunction;

- (int)startWithArguments:(const char **)a0 count:(int)a1;
- (void)checkIn;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (int)_startWithArguments:(const char **)a0 count:(int)a1;
- (void)resume;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)willFinishLaunching;
- (void)didFinishLaunching;

@end
