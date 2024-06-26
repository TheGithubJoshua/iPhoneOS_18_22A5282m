@class NSDictionary;

@interface AMSODIAdditionalAttributes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *attributes;

- (id)initWithCoder:(id)a0;
- (id)initWithAttributes:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
