@class NSString;

@interface VIImage : NSObject <VIImageContent>

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

- (struct CGSize { double x0; double x1; })imageSize;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isLoaded;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;

@end
