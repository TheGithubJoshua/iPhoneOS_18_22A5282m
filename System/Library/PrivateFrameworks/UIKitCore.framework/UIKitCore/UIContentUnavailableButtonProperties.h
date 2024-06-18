@class UIAction, UIMenu, UIButtonConfiguration;

@interface UIContentUnavailableButtonProperties : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedShowsMenuAsPrimaryAction : 1; unsigned char hasCustomizedEnabled : 1; unsigned char hasCustomizedRole : 1; } _buttonFlags;
    BOOL _showsMenuAsPrimaryAction;
    BOOL _enabled;
    UIButtonConfiguration *_configuration;
    UIAction *_primaryAction;
    UIMenu *_menu;
    long long _role;
    UIButtonConfiguration *_defaultConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIButtonConfiguration *configuration;
@property (copy, nonatomic) UIAction *primaryAction;
@property (copy, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long role;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
