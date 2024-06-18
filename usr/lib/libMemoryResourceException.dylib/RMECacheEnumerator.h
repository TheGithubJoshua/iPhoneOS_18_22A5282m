@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getLogPathsForSystemDiagnostic;
+ (id)getLogPathsSortedByTime;
+ (id)getLogPathsSortedByProcessFrequency;
+ (id)getLogContainer:(BOOL)a0;
+ (id)getEPLProfilePath;

- (id)nextValidURL;
- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)initCacheEnumerator;
- (void).cxx_destruct;

@end
