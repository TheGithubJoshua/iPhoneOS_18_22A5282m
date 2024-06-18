@interface UIInputViewSetPlacementInvisibleForFloatingTransition : UIInputViewSetPlacementInvisible <NSSecureCoding> {
    BOOL _isFloatingAssistantView;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0 forFloatingAssistantViewTransition:(BOOL)a1;
+ (id)placementWithPlacement:(id)a0;

- (BOOL)isFloatingAssistantView;
- (id)assistantView;
- (BOOL)showsEditItems;
- (BOOL)isHiddenForFloatingTransition;

@end
