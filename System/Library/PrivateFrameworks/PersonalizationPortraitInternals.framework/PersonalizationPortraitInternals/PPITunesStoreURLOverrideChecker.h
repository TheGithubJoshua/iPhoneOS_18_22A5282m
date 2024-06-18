@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface PPITunesStoreURLOverrideChecker : NSObject {
    id /* block */ _isAppAvailableToOpenURLBlock;
    NSDictionary *_propertyList;
    NSMutableDictionary *_compiledPatterns;
    NSMutableSet *_supportedSchemes;
    NSMutableSet *_failedSchemes;
    NSMutableSet *_failedHosts;
}

- (id)overrideForURL:(id)a0;
- (id)init;
- (id)initWithPropertyList:(id)a0 isAppAvailableToOpenURLBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithPlistPaths:(id)a0 isAppAvailableToOpenURLBlock:(id /* block */)a1;

@end
