@protocol MCMContext;

@interface MCMClientConnection : NSObject

@property (readonly, nonatomic) id<MCMContext> context;

+ (id)sharedClientConnection;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0 kernel:(BOOL)a1;
+ (id)privilegedClientConnectionWithUserIdentity:(id)a0;

- (void)containerManagerCleanupWithCompletion:(id /* block */)a0;
- (id)init;
- (void)_regenerateAllSystemContainerPaths;
- (id)initWithContext:(id)a0;
- (id)clientBundleIdentifier;
- (void)rebootContainerManagerCleanupWithCompletion:(id /* block */)a0;
- (void)rebootContainerManagerSetup;
- (void).cxx_destruct;
- (void)_cleanupOrphanedDataForDirectories:(id)a0 containerClass:(unsigned long long)a1;
- (BOOL)_containerURL:(id)a0 isValidForContainerClass:(unsigned long long)a1;
- (void)_cleanupOprhanedCodeSigningMappingData;
- (void)containerManagerSetup;

@end
