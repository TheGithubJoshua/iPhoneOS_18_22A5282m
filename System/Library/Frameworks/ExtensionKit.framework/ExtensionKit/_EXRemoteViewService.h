@class _EXHostViewControllerConfiguration, _EXExtensionProcessHandle, NSUUID;

@interface _EXRemoteViewService : _UIRemoteViewService {
    NSUUID *_contextToken;
}

@property (readonly) _EXHostViewControllerConfiguration *configuration;
@property (readonly) _EXExtensionProcessHandle *extensionProcess;

- (id)contextToken;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)viewControllerClassName;
- (void)endUsing:(id /* block */)a0;
- (void)beginUsing:(id /* block */)a0;
- (id)identifier;
- (BOOL)multipleInstances;
- (BOOL)overridesHostAppearance;
- (id)xpcServiceNameRoot;
- (id)initWithExtensionConfiguration:(id)a0 extensionProcess:(id)a1 contextToken:(id)a2;
- (id)multipleInstancesUUID;

@end
