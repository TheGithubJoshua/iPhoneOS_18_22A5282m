@class NSUUID, NSExtension;
@protocol PKPlugIn;

@interface _UIConcreteRemoteViewService : _UIRemoteViewService {
    BOOL _overridesHostAppearance;
    NSUUID *_contextToken;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<PKPlugIn> plugin;

- (id)contextToken;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)viewControllerClassName;
- (void)endUsing:(id /* block */)a0;
- (void)beginUsing:(id /* block */)a0;
- (id)identifier;
- (id)multipleInstanceUUID;
- (id)initWithExtension:(id)a0 andContextToken:(id)a1;
- (BOOL)multipleInstances;
- (BOOL)overridesHostAppearance;
- (void)updateOverridesHostAppearance;
- (id)xpcServiceNameRoot;

@end
