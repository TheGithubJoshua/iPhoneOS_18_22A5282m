@class NSString, NSXPCListener;

@interface ATXAppDirectoryServer : NSObject <NSXPCListenerDelegate, ATXAppDirectoryInterface> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)notifyBookmarksDidChange;
- (void)requestNotificationWhenCategoriesAreReady;
- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)categoriesWithReply:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
