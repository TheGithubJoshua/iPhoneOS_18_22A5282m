@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DESDeviceIdentifierStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSMutableDictionary *deviceIdentifiers;

- (id)init;
- (void)_readIdentifierStore;
- (id)identifierForBundleId:(id)a0;
- (id)initWithStoreURL:(id)a0;
- (void)_writeIdentifierStore;
- (void).cxx_destruct;

@end
