@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NTKFaceSupportDateDatabase : NSObject {
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSMutableDictionary *_lookup;
}

@property (readonly, copy, nonatomic) NSString *filePath;

- (void)deleteDateForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithFileAtPath:(id)a0;
- (void)recordDate:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_queue_loadLookup;
- (void).cxx_destruct;
- (void)retreiveDateForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_queue_save;

@end
