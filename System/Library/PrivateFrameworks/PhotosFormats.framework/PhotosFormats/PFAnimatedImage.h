@class PFFrameCache;

@interface PFAnimatedImage : NSObject {
    struct CGImageSource { } *_imageSource;
    double *_frameDelayTimes;
}

@property (readonly, nonatomic) PFFrameCache *frameCache;
@property (nonatomic) long long cacheStrategy;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0 cachingStrategy:(long long)a1 useGlobalDecodeQueue:(BOOL)a2;
- (void)_preloadDelayTimes;
- (double)frameDelayAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0 cachingStrategy:(long long)a1;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 cachingStrategy:(long long)a1;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 cachingStrategy:(long long)a1 useGlobalDecodeQueue:(BOOL)a2;
- (id)initWithURL:(id)a0 cachingStrategy:(long long)a1;

@end
