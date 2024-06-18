@class UIImage, SSUIServiceOptions;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SSUIServiceOptions *options;

+ (id)entitlement;
+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
