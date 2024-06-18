@class HACCLiveListenLevelGroup;

@interface HACCLiveListenButton : HUICCToggleButton

@property (retain, nonatomic) HACCLiveListenLevelGroup *levelGroup;
@property (nonatomic) BOOL isListening;

- (id)init;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)accessoryView;
- (void)updateValue;
- (id)contentValue;
- (void)liveListenAudioLevelDidChange:(double)a0;

@end
