@class NSArray, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface INImageServiceRegistry : NSObject {
    NSMutableDictionary *_imageServicesByServiceIdentifier;
    NSMutableArray *_prioritySortedImageServices;
    NSObject<OS_dispatch_queue> *_registryQueue;
}

@property (readonly, copy, nonatomic) NSArray *imageLoaders;
@property (readonly, copy, nonatomic) NSArray *imageStorageServices;
@property (readonly, copy, nonatomic) NSArray *imageServices;

+ (id)sharedInstance;

- (id)init;
- (id)imageServiceForServiceIdentifier:(id)a0;
- (void)registerImageService:(id)a0;
- (void)unregisterImageService:(id)a0;
- (void).cxx_destruct;
- (void)_reprioritizeImageServices;
- (id)imageLoaderForServiceIdentifier:(id)a0;
- (id)imageStorageServiceForServiceIdentifier:(id)a0;

@end
