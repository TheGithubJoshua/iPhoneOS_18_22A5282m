@class NSString, AXSiriShortcut;

@interface FKASiriShortcutKeyboardCommand : AXSSKeyboardCommand

@property (retain, nonatomic) AXSiriShortcut *shortcut;
@property (readonly, nonatomic) NSString *siriShortcutIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)commandWithSiriShortcutIdentifier:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCommand:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)perform;
- (id)initWithSiriShortcutIdentifier:(id)a0;

@end
