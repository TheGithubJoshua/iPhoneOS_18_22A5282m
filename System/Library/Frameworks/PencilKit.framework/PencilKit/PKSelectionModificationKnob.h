@class CALayer;

@interface PKSelectionModificationKnob : CALayer {
    CALayer *_knobLayer;
    CALayer *_knobTailLayer;
    BOOL _isBrushSelecting;
    BOOL _isRTL;
    long long _knobLocation;
    struct CGColor { } *_knobColor;
}

- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)dealloc;

@end
