@class CKScheduledUpdater, NSTimer, CKFullScreenEffect, NSString, NSMutableArray, NSObject;
@protocol CKFullScreenEffectManagerDelegate;

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate>

@property (retain, nonatomic) CKFullScreenEffect *currentEffect;
@property (retain, nonatomic) NSMutableArray *effectQueue;
@property (retain, nonatomic) NSTimer *effectDurationTimer;
@property (retain, nonatomic) CKScheduledUpdater *triggerUpdater;
@property (weak, nonatomic) NSObject<CKFullScreenEffectManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)delayBeforeEffectWithIdentifier:(id)a0;
+ (double)idleDurationAfterEffectWithIdentifier:(id)a0;
+ (id)localizedMaskStringForEffectWithIdentifier:(id)a0;

- (id)init;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (id)effectForIdentifier:(id)a0;
- (id)effectIdentifiers;
- (void)endHoldingUpdatesForKey:(id)a0;
- (void)fullScreenEffectDidPrepareSoundEffect:(id)a0;
- (id)fullscreenEffectMap;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)a0;
- (id)localizedPickerTitleForEffectWithIdentifier:(id)a0;
- (void)startFullscreenEffectForChatItem:(id)a0 language:(id)a1;
- (void)stopFullscreenEffect;
- (void)triggerNextEffect;

@end
