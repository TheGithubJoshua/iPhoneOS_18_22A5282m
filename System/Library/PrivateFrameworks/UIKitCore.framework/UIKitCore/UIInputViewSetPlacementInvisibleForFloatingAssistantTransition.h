@interface UIInputViewSetPlacementInvisibleForFloatingAssistantTransition : UIInputViewSetPlacementInvisible <NSSecureCoding> {
    UIInputViewSetPlacementInvisibleForFloatingAssistantTransition *_cachedSecondaryPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (double)alpha;
- (void).cxx_destruct;
- (BOOL)isFloatingAssistantView;
- (BOOL)isCompactAssistantView;
- (id)subPlacements;

@end
