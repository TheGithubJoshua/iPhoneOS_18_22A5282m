@class NSCache, MPUBorderView;

@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView *_borderView;
    NSCache *_images;
}

@property (nonatomic) double displayScale;

- (void)_applicationDidReceiveMemoryWarning:(id)a0;
- (id)init;
- (id)_borderView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (id)imageForBorderConfiguration:(id)a0;

@end
