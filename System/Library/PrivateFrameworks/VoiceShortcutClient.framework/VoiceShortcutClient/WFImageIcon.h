@class WFImage;

@interface WFImageIcon : WFIcon

@property (readonly, nonatomic) WFImage *image;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
