@class NSMutableDictionary;

@interface SVXServiceCommandDelayedActionStore : NSObject {
    NSMutableDictionary *_actionsByKey;
}

- (void)removeAllActions;
- (id)init;
- (void)setAction:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)actionForKey:(id)a0;
- (void)removeActionForKey:(id)a0;

@end
