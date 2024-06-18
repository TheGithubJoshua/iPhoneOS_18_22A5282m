@class NSString, UIImage;

@interface MRUSubtitleValue : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) long long accessory;

- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)a0 icon:(id)a1 accessory:(long long)a2;
- (BOOL)isEqualToSubtitleValue:(id)a0;

@end
