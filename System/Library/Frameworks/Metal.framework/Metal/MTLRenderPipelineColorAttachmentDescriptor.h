@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic, getter=isBlendingEnabled) BOOL blendingEnabled;
@property (nonatomic) unsigned long long sourceRGBBlendFactor;
@property (nonatomic) unsigned long long destinationRGBBlendFactor;
@property (nonatomic) unsigned long long rgbBlendOperation;
@property (nonatomic) unsigned long long sourceAlphaBlendFactor;
@property (nonatomic) unsigned long long destinationAlphaBlendFactor;
@property (nonatomic) unsigned long long alphaBlendOperation;
@property (nonatomic) unsigned long long writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
