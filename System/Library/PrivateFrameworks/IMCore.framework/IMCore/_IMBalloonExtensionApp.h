@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (void)setIsEnabled:(BOOL)a0;
- (BOOL)isLaunchProhibited;
- (id)itemID;
- (BOOL)isEnabled;
- (id)applicationType;
- (void).cxx_destruct;
- (id)version;
- (id)plugin;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (BOOL)isBetaPlugin;
- (BOOL)showInBrowser;
- (BOOL)showableInBrowser;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;
- (BOOL)isStickerPackOnly;

@end
