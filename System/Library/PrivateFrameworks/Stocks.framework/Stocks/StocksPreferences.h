@class NSUserDefaults;

@interface StocksPreferences : NSObject {
    NSUserDefaults *_sharedDefaults;
}

@property (readonly, nonatomic, getter=isChangeColorSwapped) BOOL changeColorSwapped;
@property (readonly, nonatomic) unsigned long long textDirection;
@property (readonly, nonatomic) BOOL textAttachmentDirectionIsRightToLeft;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)resetLocale;
- (long long)integerForKey:(id)a0;
- (void)synchronize;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)boolForKey:(id)a0;

@end
