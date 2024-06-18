@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (void)registerPluginsFromBundle:(id)a0;
- (id)pluginManagerForBundle:(id)a0;
- (void).cxx_destruct;
- (id)mainPluginManager;
- (void)registerPlugins;

@end
