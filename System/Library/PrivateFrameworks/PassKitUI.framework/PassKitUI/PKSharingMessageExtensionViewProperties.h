@class NSString, UIImage;

@interface PKSharingMessageExtensionViewProperties : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *leftTitleText;
@property (retain, nonatomic) NSString *rightTitleText;
@property (retain, nonatomic) UIImage *cardImage;
@property (retain, nonatomic) NSString *fallbackCardImageName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToSharingMessageExtensionViewProperties:(id)a0;

@end
