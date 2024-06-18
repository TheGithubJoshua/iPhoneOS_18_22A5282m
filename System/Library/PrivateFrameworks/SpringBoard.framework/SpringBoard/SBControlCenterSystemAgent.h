@class NSString;

@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlockOrientation;
- (void)lockOrientation;
- (BOOL)isUILocked;
- (BOOL)isRingerMuted;
- (void)setRingerMuted:(BOOL)a0;
- (BOOL)isOrientationLocked;

@end
