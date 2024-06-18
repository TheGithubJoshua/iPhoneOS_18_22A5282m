@class NSString, NSXPCConnection;
@protocol LNMetadataProviderInterface;

@interface LNMetadataProvider : NSObject <LNMetadataProviderInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<LNMetadataProviderInterface> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerBundleWithIdentifier:(id)a0 force:(BOOL)a1 reply:(id /* block */)a2;
- (id)enumsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsWithFullyQualifiedIdentifiers:(id)a0 error:(id *)a1;
- (id)actionsConformingToSystemProtocol:(id)a0 withParametersOfTypes:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)actionsWithError:(id *)a0;
- (id)bundlesWithError:(id *)a0;
- (void)scanBundlesWithReply:(id /* block */)a0;
- (void)unregisterBundleWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (id)actionForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (id)queriesWithError:(id *)a0;
- (id)actionsForBundleIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)entitiesForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)entitiesWithError:(id *)a0;
- (id)actionsConformingToSystemProtocols:(id)a0 logicalType:(unsigned long long)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)queriesForBundleIdentifier:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)actionsForBundleIdentifier:(id)a0 andActionIdentifier:(id)a1 error:(id *)a2;
- (long long)metadataVersionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)initWithOptions:(long long)a0;
- (void)resetWithReply:(id /* block */)a0;
- (id)enumsWithError:(id *)a0;

@end
