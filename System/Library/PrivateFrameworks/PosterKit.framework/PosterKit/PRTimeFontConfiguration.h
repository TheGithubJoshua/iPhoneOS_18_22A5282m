@class NSString, UIFont;

@interface PRTimeFontConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *timeFontIdentifier;
@property (readonly, copy, nonatomic) UIFont *customFont;

- (id)init;
- (unsigned long long)hash;
- (id)initWithCustomFont:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeFontIdentifier:(id)a0;

@end
