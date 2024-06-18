@interface CAMFilterStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isOn) BOOL on;

- (BOOL)shouldUseOutline;
- (id)imageNameForCurrentState;
- (id)imageNameForAXHUD;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseHierarchicalSymbol;

@end
