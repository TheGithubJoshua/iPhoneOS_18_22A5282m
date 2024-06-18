@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (copy, nonatomic) NSArray *supportedPixelFormats;
@property (copy, nonatomic) NSArray *preferredPixelFormats;
@property (copy, nonatomic) NSArray *supportedColorSpaceProperties;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) unsigned long long widthAlignment;
@property (nonatomic) unsigned long long heightAlignment;
@property (copy, nonatomic) NSArray *supportedCacheModes;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (nonatomic) BOOL prewireBuffers;
@property (nonatomic) BOOL memoryPoolUseAllowed;

+ (void)initialize;
+ (id)cacheModesForOptimizedCPUAccess;
+ (id)cacheModesForCacheProfile:(int)a0;
+ (id)cacheModesForOptimizedDisplayAccess;
+ (id)cacheModesForOptimizedHWAccess;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned int)mediaType;
- (id)initWithPixelBufferAttributes:(id)a0;
- (Class)formatClass;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)dealloc;

@end
