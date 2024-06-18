@interface GCFrameworkInitialization : NSObject

+ (void)listenForObservers;
+ (id)initOperationQueue;
+ (void)enableMouseSupportWithReason:(long long)a0;
+ (void)controllerManagerDidOpen;
+ (void)initializeFramework;
+ (void)enableControllerSupportWithReason:(long long)a0;
+ (void)enableKeyboardAndMouseSupportServerSide;
+ (void)enableKeyboardSupportWithReason:(long long)a0;
+ (id)initQueue;

@end
