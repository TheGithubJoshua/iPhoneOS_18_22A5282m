@class SBDisplayItem, NSString, UIColor, UIImage;

@interface SBFluidSwitcherSpaceTitleItem : NSObject <NSCopying>

@property (readonly, nonatomic) SBDisplayItem *displayItem;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) long long subtitleInterfaceStyle;
@property (nonatomic) BOOL showsMultiWindowIndicator;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayItem:(id)a0;

@end
