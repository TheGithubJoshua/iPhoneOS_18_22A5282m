@class NSXPCListener, NSString;

@interface DeleteAppFontsDialogHandler : NSObject <NSXPCListenerDelegate, FontInstallViewServiceProtocol>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)doneWithDeleteAppFonts:(BOOL)a0;
- (void)showDialogWithUserInfo:(id)a0;

@end
