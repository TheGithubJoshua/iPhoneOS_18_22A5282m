@class NSString, NSMutableSet, RBSProcessMonitor;
@protocol LSApplicationWorkspaceObserverProtocol;

@interface GKApplicationStateMonitor : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableSet *interestedBundleIDs;
@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id<LSApplicationWorkspaceObserverProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (BOOL)startObservingStateChangesForBundleID:(id)a0;
- (void)startObservingApplicationWorkspaceChanges;
- (void).cxx_destruct;
- (void)applicationsWillUninstall:(id)a0;
- (void)updateStateObservation;
- (void)dealloc;
- (void)stopObservingStateChangesForBundleID:(id)a0;

@end
