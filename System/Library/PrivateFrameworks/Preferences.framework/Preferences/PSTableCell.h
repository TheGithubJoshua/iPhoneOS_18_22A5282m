@class NSString, NSArray, NSURL, UILongPressGestureRecognizer, PSSpecifier, UIImageView, NSURLSession, PSTableCellHighlightContext;

@interface PSTableCell : UITableViewCell {
    id _value;
    UIImageView *_checkedImageView;
    BOOL _checked;
    BOOL _shouldHideTitle;
    NSString *_hiddenTitle;
    int _alignment;
    SEL _pAction;
    id _pTarget;
    BOOL _cellEnabled;
    PSSpecifier *_specifier;
    BOOL _lazyIcon;
    BOOL _lazyIconDontUnload;
    BOOL _lazyIconForceSynchronous;
    NSString *_lazyIconAppID;
    PSTableCellHighlightContext *_customHighlightContext;
    NSURLSession *_urlSession;
    NSURL *_lazyIconURL;
}

@property (nonatomic) BOOL isCopyable;
@property (retain, nonatomic) NSURL *lazyIconURL;
@property (retain, nonatomic) UILongPressGestureRecognizer *longTapRecognizer;
@property (nonatomic) BOOL isCopyable;
@property (retain, nonatomic) UILongPressGestureRecognizer *longTapRecognizer;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (nonatomic) long long type;
@property (nonatomic) BOOL reusedCell;
@property (nonatomic) BOOL forceHideDisclosureIndicator;

+ (long long)cellStyle;
+ (id)reuseIdentifierForClassAndType:(long long)a0;
+ (double)defaultCellHeight;
+ (Class)cellClassForSpecifier:(id)a0;
+ (long long)cellTypeFromString:(id)a0;
+ (id)reuseIdentifierForBasicCellTypes:(long long)a0;
+ (id)reuseIdentifierForSpecifier:(id)a0;
+ (id)stringFromCellType:(long long)a0;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setAlignment:(int)a0;
- (void)setChecked:(BOOL)a0;
- (void)copy:(id)a0;
- (id)target;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (id)blankIcon;
- (SEL)action;
- (void)setValue:(id)a0;
- (id)_urlSession;
- (id)getLazyIcon;
- (void)setAction:(SEL)a0;
- (id)titleLabel;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)prepareForReuse;
- (void)setTarget:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (id)title;
- (BOOL)canBecomeFirstResponder;
- (id)_automationID;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (id)value;
- (void)setIcon:(id)a0;
- (double)textFieldOffset;
- (id)_checkmarkImage:(BOOL)a0;
- (id)_contentString;
- (id)_disclosureChevronImage:(BOOL)a0;
- (BOOL)isChecked;
- (id)scriptingInfoWithChildren;
- (id)valueLabel;
- (void)setCellEnabled:(BOOL)a0;
- (id)getIcon;
- (id)_copyableText;
- (void)_invalidateHighlightContext;
- (void)_updateAccessoryTypeForSpecifier:(id)a0;
- (BOOL)canBeChecked;
- (SEL)cellAction;
- (BOOL)cellEnabled;
- (void)cellRemovedFromView;
- (id)cellTarget;
- (id)getLazyIconID;
- (void)highlightCellForDuration:(double)a0 animateUnighlight:(BOOL)a1;
- (id)lazyIconQueue:(id)a0;
- (void)longPressed:(id)a0;
- (BOOL)modernLayoutEnabled;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;
- (void)setCellAction:(SEL)a0;
- (void)setCellTarget:(id)a0;
- (void)setShouldHideTitle:(BOOL)a0;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;
- (void)setupModernLayoutConstraints;
- (BOOL)shouldUseModernLayout;
- (id)titleTextLabel;

@end
