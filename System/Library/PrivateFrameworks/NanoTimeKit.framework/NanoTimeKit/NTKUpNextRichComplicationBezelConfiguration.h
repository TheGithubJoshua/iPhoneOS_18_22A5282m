@class UIImage;

@interface NTKUpNextRichComplicationBezelConfiguration : NTKUpNextComplicationConfiguration

@property (readonly, nonatomic) UIImage *maskImage;
@property (readonly, nonatomic) double radius;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaskImage:(id)a0 radius:(double)a1;

@end
