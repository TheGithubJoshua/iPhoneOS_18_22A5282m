@class NSString, _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <NSCopying> {
    BOOL _useEmojiStyles;
}

@property (nonatomic) BOOL lightKeyboard;
@property (nonatomic) long long forceQuality;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurSaturation;
@property (nonatomic) double keycapOpacity;
@property (nonatomic) double lightKeycapOpacity;
@property (copy, nonatomic) NSString *controlKeyBackgroundName;
@property (copy, nonatomic) NSString *activatedKeyplaneSwitchControlKeyBackgroundName;
@property (nonatomic) BOOL isFloating;
@property (readonly, nonatomic) BOOL whiteText;
@property (readonly, nonatomic) long long backdropStyle;
@property (readonly, nonatomic) long long blurEffectStyle;
@property (readonly, nonatomic) _UIButtonBarButtonVisualProvider *buttonBarVisualProvider;

+ (id)configForAppearance:(long long)a0 inputMode:(id)a1 traitEnvironment:(id)a2;
+ (id)lowQualityDarkConfig;
+ (id)defaultConfig;
+ (long long)backdropStyleForStyle:(long long)a0 quality:(long long)a1;
+ (id)defaultEmojiConfig;
+ (id)darkConfig;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
