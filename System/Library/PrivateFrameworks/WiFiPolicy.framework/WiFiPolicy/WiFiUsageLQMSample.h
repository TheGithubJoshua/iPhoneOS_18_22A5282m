@interface WiFiUsageLQMSample : NSObject

+ (id)featureFromFieldName:(id)a0;
+ (void)initialize;
+ (id)allLQMProperties;
+ (id)binLabelfromFieldName:(id)a0 value:(long long)a1;
+ (BOOL)isPerSecond:(id)a0;

- (id)description;
- (id)asDictionaryInto:(id)a0;
- (id)numberForKeyPath:(id)a0;

@end
