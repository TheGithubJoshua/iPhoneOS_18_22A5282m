@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

@interface MediaControlsHapticPlayer : NSObject

@property (retain, nonatomic) CHHapticEngine *engine;
@property (retain, nonatomic) id<CHHapticPatternPlayer> expandedButtonChangedPlayer;

- (void)setupExpandedButtonChanged;
- (void)tearDown;
- (void).cxx_destruct;
- (void)expandedButtonChanged;
- (void)dealloc;
- (void)checkError:(id)a0;
- (void)prepare;

@end
