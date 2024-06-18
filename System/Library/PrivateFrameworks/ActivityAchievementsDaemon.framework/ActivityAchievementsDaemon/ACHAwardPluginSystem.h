@class NSArray;

@interface ACHAwardPluginSystem : NSObject {
    NSArray *_plugins;
}

- (id)_loadPrincipalClassesConformingToProtocols:(id)a0 fromBundlesInDirectoryAtPath:(id)a1 error:(id *)a2;
- (id)init;
- (id)_principalClassProtocols;
- (void)_loadPlugins;
- (id)_createPluginsFromClasses:(id)a0;
- (id)createTemplateAssetSources;
- (void).cxx_destruct;
- (Class)_loadPrincipalClassConformingToProtocols:(id)a0 fromBundleAtPath:(id)a1;
- (id)_pluginDirectoryPath;
- (id)_pluginClasses;

@end
