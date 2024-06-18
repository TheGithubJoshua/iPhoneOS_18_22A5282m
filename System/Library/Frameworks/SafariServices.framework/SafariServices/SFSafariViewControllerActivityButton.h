@class UIImage, NSString;

@interface SFSafariViewControllerActivityButton : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _fieldsAreValid;
@property (readonly, copy, nonatomic) UIImage *templateImage;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTemplateImage:(id)a0 extensionIdentifier:(id)a1;

@end
