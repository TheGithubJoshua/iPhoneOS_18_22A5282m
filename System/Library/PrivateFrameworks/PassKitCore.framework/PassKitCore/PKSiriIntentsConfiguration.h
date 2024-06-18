@class NSArray;

@interface PKSiriIntentsConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *supportedCarKeyIntents;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
