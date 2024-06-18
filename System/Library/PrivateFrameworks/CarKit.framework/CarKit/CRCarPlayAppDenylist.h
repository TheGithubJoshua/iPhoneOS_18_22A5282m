@class NSSet, NSXPCConnection;

@interface CRCarPlayAppDenylist : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSSet *denylistedBundleIDs;

- (id)init;
- (void)_setupConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_denylistPreference;
- (void)_requestDenylistUpdate;
- (BOOL)containsBundleIdentifier:(id)a0;

@end
