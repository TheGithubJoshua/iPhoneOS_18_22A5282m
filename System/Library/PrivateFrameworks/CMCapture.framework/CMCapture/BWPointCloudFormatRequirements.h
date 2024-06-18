@class NSArray, NSDictionary;

@interface BWPointCloudFormatRequirements : BWFormatRequirements <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *supportedDataFormats;
@property (nonatomic) unsigned long long maxPoints;
@property (nonatomic) unsigned long long dataBufferSize;
@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (nonatomic) BOOL memoryPoolUseAllowed;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned int)mediaType;
- (Class)formatClass;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;

@end
