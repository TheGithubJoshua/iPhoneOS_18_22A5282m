@interface SBDisabledIdleTimer : SBIdleTimerBase {
    BOOL _activated;
}

- (void)setActivated:(BOOL)a0;
- (BOOL)isActivated;
- (BOOL)isDisabled;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
