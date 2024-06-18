@class UIColor, NSArray;

@interface RTIAssistantItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL visibleWhenMinimized;
@property (nonatomic) BOOL showsBarButtonItemsInline;
@property (nonatomic) BOOL showsInputDashboardViewController;
@property (nonatomic) float centerViewPreferredWidth;
@property (retain, nonatomic) UIColor *detachedTintColor;
@property (retain, nonatomic) UIColor *detachedBackgroundColor;
@property (retain, nonatomic) NSArray *leadingBarButtonGroups;
@property (retain, nonatomic) NSArray *trailingBarButtonGroups;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end