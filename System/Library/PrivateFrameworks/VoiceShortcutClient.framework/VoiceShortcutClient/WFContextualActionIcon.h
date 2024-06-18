@class WFColor, NSString, WFIcon, WFImage, NSData;

@interface WFContextualActionIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFIcon *wfIcon;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *renderedSymbolSystemName;
@property (readonly, nonatomic) WFColor *renderedSymbolBackgroundColor;
@property (readonly, nonatomic) WFImage *renderedImage;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) double imageScale;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;

+ (id)iconWithApplicationBundleIdentifier:(id)a0;
+ (id)iconWithImageName:(id)a0;
+ (id)iconWithSystemName:(id)a0;
+ (id)iconWithRenderedSymbolOfSystemName:(id)a0 backgroundColor:(id)a1;
+ (id)imageNamed:(id)a0;
+ (id)iconWithImageData:(id)a0 scale:(double)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithImageName:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)initWithRenderedSymbolOfSystemName:(id)a0 backgroundColor:(id)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageData:(id)a0 scale:(double)a1;
- (id)initWithSystemName:(id)a0;

@end
