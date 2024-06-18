@class WBSRemotePlistController;

@interface _SFRequestDesktopSiteQuirksManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
    BOOL _supportsDesktopClassBrowsing;
}

@property (class, readonly, nonatomic) _SFRequestDesktopSiteQuirksManager *sharedManager;

- (id)init;
- (void)quirksValueForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllQuirkValuesWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
