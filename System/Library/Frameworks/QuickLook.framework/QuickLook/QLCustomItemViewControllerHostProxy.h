@class NSString;
@protocol QLCustomItemViewControllerHost;

@interface QLCustomItemViewControllerHostProxy : NSObject <QLCustomItemViewControllerHost>

@property (weak, nonatomic) id<QLCustomItemViewControllerHost> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFullScreen:(BOOL)a0;
- (void)dismissQuickLook;
- (void)forwardMessageToHostOfCustomViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentShareSheetWithPopoverTracker:(id)a0 customSharedURL:(id)a1 dismissCompletion:(id /* block */)a2;

@end
