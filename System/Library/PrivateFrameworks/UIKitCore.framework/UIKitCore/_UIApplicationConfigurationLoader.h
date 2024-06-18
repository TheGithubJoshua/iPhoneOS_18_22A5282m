@class UISApplicationInitializationContext;

@interface _UIApplicationConfigurationLoader : NSObject {
    UISApplicationInitializationContext *_applicationInitializationContext;
    _Atomic BOOL _hasRequestedPreload;
}

@property (class, readonly, nonatomic) _UIApplicationConfigurationLoader *sharedLoader;

@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;
@property (readonly, nonatomic) BOOL isFrontBoard;
@property (readonly, nonatomic) BOOL usesLocalInitializationContext;

- (id)_loadInitializationContext;
- (id)_appInitializationContextFactoryClass;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startPreloadInitializationContext;

@end
