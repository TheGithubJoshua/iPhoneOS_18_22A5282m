@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SFStoreBannerTracker : NSObject {
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) SFStoreBannerTracker *sharedTracker;

- (void)load;
- (id)filePath;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (void)save;
- (void)blockProductBanner:(id)a0;
- (void)isProductBannerBlocked:(id)a0 completion:(id /* block */)a1;

@end
