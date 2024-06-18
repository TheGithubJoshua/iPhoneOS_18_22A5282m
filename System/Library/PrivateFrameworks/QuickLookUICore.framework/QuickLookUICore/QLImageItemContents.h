@class UIImage;

@interface QLImageItemContents : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UIImage *image;

- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
