@class UIImage;

@interface NTKComplicationNoContentImages : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *modularSmallImage;
@property (retain, nonatomic) UIImage *utilitarianSmallImage;
@property (retain, nonatomic) UIImage *circularSmallImage;
@property (retain, nonatomic) UIImage *extraLargeImage;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
