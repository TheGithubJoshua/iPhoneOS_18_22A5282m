@class NSArray;

@interface AVAssetDownloadContentConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *variantQualifiers;
@property (copy, nonatomic) NSArray *mediaSelections;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (const void *)_createFigContentConfigForEnvironmentalCondition:(long long)a0;
- (void)_serializeIntoDownloadConfig:(void *)a0 asset:(id)a1;
- (void)_serializeIntoDownloadConfig:(void *)a0 environmentalCondition:(long long)a1;

@end
