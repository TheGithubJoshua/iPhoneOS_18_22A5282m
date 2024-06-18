@interface WSWebSheetViewController : UIViewController

- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissViewController:(long long)a0;
- (void)startWithURL:(id)a0 ssid:(id)a1 interface:(id)a2 proxyConfiguration:(id)a3 showCancelMenu:(BOOL)a4 delegate:(id)a5;
- (void)handleProbeResult:(long long)a0 completionHandler:(id /* block */)a1;
- (void)startWithURL:(id)a0 ssid:(id)a1 interface:(id)a2 proxyConfiguration:(id)a3 enableTVMode:(BOOL)a4 delegate:(id)a5;
- (id)webSheetView;

@end
