@class NSString, UISwipeGestureRecognizer;

@interface OKActionBindingSwipe : OKActionBinding <UIGestureRecognizerDelegate> {
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) unsigned long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)handleSwipe:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
