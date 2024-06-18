@class NSString;

@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)initialContentDownloadsEnabled;
+ (id)interface;
+ (void)installApps:(id)a0 onPairedDevice:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)installApps:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)installApp:(id)a0 onPairedDevice:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)installApp:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)setInitialContentDownloadsEnabled:(BOOL)a0;


@end
