@class PCNativeColor, PCNativeBorderStyle;

@interface PCNativeButtonStyle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PCNativeColor *color;
@property (retain, nonatomic) PCNativeColor *highlightColor;
@property (retain, nonatomic) PCNativeColor *disabledColor;
@property (retain, nonatomic) PCNativeColor *textColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) PCNativeBorderStyle *borderStyle;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
