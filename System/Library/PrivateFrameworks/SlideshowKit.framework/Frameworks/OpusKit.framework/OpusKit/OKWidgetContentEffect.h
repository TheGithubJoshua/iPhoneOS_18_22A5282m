@class NSString, OFUIView, CAAnimation, NSDictionary;

@interface OKWidgetContentEffect : NSObject <CAAnimationDelegate, OKSettingsSupport> {
    NSString *_uuid;
    NSDictionary *_settings;
    BOOL _isPaused;
    BOOL _needsApplySettings;
}

@property (nonatomic) OFUIView *animatedView;
@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL autoplay;
@property (nonatomic) double defaultDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationKeyPrefix;
+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)resumeAnimation;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)stopAnimation;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (BOOL)isAnimating;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (void)needsApplySettings;
- (void)prepareContentEffectWithView:(id)a0;
- (double)remainingPlayDuration;

@end
