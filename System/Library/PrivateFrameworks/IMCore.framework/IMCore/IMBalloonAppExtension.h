@class NSUUID, LSPlugInKitProxy, NSExtension, NSNumber;
@protocol PKPlugIn;

@interface IMBalloonAppExtension : IMBalloonPlugin

@property (retain, nonatomic) LSPlugInKitProxy *proxy;
@property (retain) NSUUID *requestIdentifier;
@property (nonatomic) BOOL canSendDataPayloads;
@property (nonatomic) BOOL shouldBalloonHideAppIcon;
@property (readonly, retain, nonatomic) NSExtension *extension;
@property (readonly, retain, nonatomic) NSNumber *itemID;
@property (readonly, retain, nonatomic) id<PKPlugIn> plugin;
@property (readonly, nonatomic) BOOL isLaunchProhibited;

- (void).cxx_destruct;
- (id)version;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (BOOL)isBetaPlugin;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (id)_initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2;

@end
