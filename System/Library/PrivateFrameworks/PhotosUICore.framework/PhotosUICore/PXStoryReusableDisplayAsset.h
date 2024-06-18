@class PXStoryResourcesDataSource;
@protocol PXDisplayAsset;

@interface PXStoryReusableDisplayAsset : NSObject {
    id<PXDisplayAsset> _displayAsset;
}

@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly, nonatomic) long long resourceIndex;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)configureWithDisplayResourceIndex:(long long)a0 resourcesDataSource:(id)a1;
- (id)displayAsset;

@end
