@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (id)init;
- (int)transition;
- (void).cxx_destruct;
- (BOOL)hasProperties;
- (void)setTransition:(int)a0;
- (BOOL)hasTransition;

@end
