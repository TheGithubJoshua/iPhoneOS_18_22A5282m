@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)initWithPath:(id)a0;
- (id)currentVersionURL;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)_modelForVersionHashes:(id)a0;
- (id)currentVersion;
- (id)modelVersions;
- (void)dealloc;
- (id)optimizedVersionURL;
- (id)urlForModelVersionWithName:(id)a0;

@end
