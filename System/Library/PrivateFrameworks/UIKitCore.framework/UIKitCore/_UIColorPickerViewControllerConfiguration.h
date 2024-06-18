@class NSString, NSArray;

@interface _UIColorPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _shouldUseDarkGridInDarkMode;
@property (nonatomic) long long _userInterfaceStyleForGrid;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showsAlpha;
@property (nonatomic) BOOL _isEmbedded;
@property (nonatomic) double _keyboardSpace;
@property (nonatomic) struct CGSize { double width; double height; } _hostWindowSize;
@property (copy, nonatomic) NSArray *_suggestedColors;
@property (nonatomic) BOOL _allowsNoColor;
@property (nonatomic) BOOL _showsEyedropper;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
