@class NSObject;
@protocol WorkspaceObserverDelegate, LSApplicationWorkspaceObserverProtocol;

@interface WorkspaceObserver : LSApplicationWorkspaceObserver {
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;
}

@property (nonatomic) NSObject<WorkspaceObserverDelegate> *delegate;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)startObserving;
- (void)stopObserving;
- (void).cxx_destruct;
- (void)applicationsWillInstall:(id)a0;
- (void)applicationsWillUninstall:(id)a0;

@end
