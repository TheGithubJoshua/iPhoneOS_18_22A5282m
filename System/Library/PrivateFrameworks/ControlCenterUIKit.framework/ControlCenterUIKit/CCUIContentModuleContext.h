@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (weak, nonatomic) id<CCUIContentModuleContextDelegate> delegate;

+ (BOOL)areAnimationsPermittedInWindow:(id)a0;
+ (void)initialize;
+ (void)performWithoutAnimationWhileHidden:(id /* block */)a0;
+ (void)setAnimationsPermitted:(BOOL)a0 inWindow:(id)a1;
+ (id)_sharedOpenAppService;
+ (id)_sharedOpenApplicationOptions;
+ (void)performWithoutAnimationWhileHiddenInWindow:(id)a0 actions:(id /* block */)a1;

- (void)openApplication:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)openApplication:(id)a0 completionHandler:(id /* block */)a1;
- (id)sensorActivityDataForActiveSensorType:(unsigned long long)a0;
- (void)setHomeGestureDismissalAllowed:(BOOL)a0;
- (id)initWithModuleIdentifier:(id)a0;
- (void)dismissControlCenter;
- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)requestLayoutSizeUpdate;
- (void)requestExpandModule;
- (void)dismissModule;
- (void)enqueueStatusUpdate:(id)a0;
- (void)requestAuthenticationWithCompletionHandler:(id /* block */)a0;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;

@end
