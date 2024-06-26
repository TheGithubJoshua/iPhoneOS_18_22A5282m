@class PIParallaxClockLayoutRequest, NSString, CIImage, PFParallaxLayout;
@protocol PFParallaxLayoutConfiguration;

@interface _PIParallaxClockLayoutJob : NURenderJob

@property (readonly, nonatomic) PIParallaxClockLayoutRequest *clockLayoutRequest;
@property (retain, nonatomic) PFParallaxLayout *layout;
@property (retain, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (retain, nonatomic) CIImage *matteImage;
@property (retain, nonatomic) NSString *clockLayerOrder;
@property (nonatomic) unsigned long long clockIntersection;

- (id)initWithRequest:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (id)initWithParallaxClockLayoutRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
