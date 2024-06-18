@class UIColor;

@interface NTKExplorerDotColorOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIColor *connectedDotColor;
@property (retain, nonatomic) UIColor *connectedDotBackgroundColor;
@property (retain, nonatomic) UIColor *noServiceDotColor;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
