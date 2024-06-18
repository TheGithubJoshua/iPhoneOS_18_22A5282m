@class NUColorSpace;
@protocol NUScalePolicy;

@interface NUVideoRenderRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain) id<NUScalePolicy> scalePolicy;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
