@class NSMutableDictionary;

@interface FrameworkCache : NSObject {
    NSMutableDictionary *_selectorValueDict;
}

+ (SEL)getCacheableSelectorForNotification:(id)a0;
+ (unsigned char)getCachePolicyForSelector:(SEL)a0;

- (id)init;
- (void)handleDisconnection;
- (void)handleValue:(id)a0 forSelector:(SEL)a1;
- (id)valueForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)handleNotification:(id)a0;

@end
