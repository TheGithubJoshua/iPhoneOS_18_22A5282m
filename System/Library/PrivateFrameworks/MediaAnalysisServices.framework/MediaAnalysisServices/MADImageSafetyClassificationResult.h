@class NSDictionary;

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIsSensitive:(BOOL)a0 andAttributes:(id)a1;

@end
