@class NSString, UIFont;

@interface AVMobileImageConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL imageContainedInBundle;

- (id)imageName;
- (id)initWithImageName:(id)a0 font:(id)a1 imageContainedInBundle:(BOOL)a2;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 font:(id)a1;

@end
