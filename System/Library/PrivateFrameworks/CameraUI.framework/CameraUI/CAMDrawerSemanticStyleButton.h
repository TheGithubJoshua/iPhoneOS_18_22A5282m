@class CAMSemanticStyle;

@interface CAMDrawerSemanticStyleButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;
@property (retain, nonatomic, setter=setSemanticStyle:) CAMSemanticStyle *semanticStyle;

- (long long)controlType;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
