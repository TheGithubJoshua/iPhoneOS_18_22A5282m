@class CAFilter;

@interface FigCaptionBackdropLayer : FigBaseCABackdropLayer {
    CAFilter *backdropFilter;
}

+ (void)initialize;
+ (unsigned char)isSupported;

- (void)configure;
- (id)init;
- (void)applyRoundedCorners:(struct CGPath { } *)a0;
- (void)dealloc;
- (void)removeBackdropFromSuperLayer;
- (void)insertBackdropAsSublayerToLayer:(id)a0 below:(id)a1;

@end
