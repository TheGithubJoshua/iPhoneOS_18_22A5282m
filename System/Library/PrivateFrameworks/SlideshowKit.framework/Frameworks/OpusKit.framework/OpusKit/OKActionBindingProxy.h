@class NSString, NSMutableArray;
@protocol OKActionResponder;

@interface OKActionBindingProxy : NSObject <UIGestureRecognizerDelegate, OKSettingsSupport, NSCopying>

@property (copy, nonatomic) NSString *actionScript;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSMutableArray *shouldRecognizeSimultaneously;
@property (nonatomic) BOOL alwaysRecognizeSimultaneously;
@property (copy, nonatomic) NSMutableArray *requireToFail;
@property (nonatomic) BOOL canBeTriggeredWithoutInteractivity;
@property (nonatomic) id target;
@property (nonatomic) SEL selector;
@property (readonly) id<OKActionResponder> actionResponder;
@property (readonly) unsigned long long scope;
@property (nonatomic) long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionBinding;
+ (id)actionBindingWithGestureRecognizer:(id)a0 fromActionResponder:(id)a1;
+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (id)init;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (BOOL)performAction:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })locationForActionFromGesture:(id)a0;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)prepareAction:(id)a0;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
