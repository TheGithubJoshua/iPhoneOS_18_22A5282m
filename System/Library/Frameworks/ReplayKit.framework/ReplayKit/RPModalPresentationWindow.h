@interface RPModalPresentationWindow : UIApplicationRotationFollowingWindow

- (id)init;
- (BOOL)isInternalWindow;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (id)_presentationViewController;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)mainWindow;

@end
