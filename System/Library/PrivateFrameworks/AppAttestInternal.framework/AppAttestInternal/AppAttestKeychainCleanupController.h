@class NSString, LSApplicationWorkspace;

@interface AppAttestKeychainCleanupController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace *_workspace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)_updateActivityCriteria:(id *)a0;
- (void)start;
- (void).cxx_destruct;
- (void)_registerActivity;
- (void)dealloc;

@end
