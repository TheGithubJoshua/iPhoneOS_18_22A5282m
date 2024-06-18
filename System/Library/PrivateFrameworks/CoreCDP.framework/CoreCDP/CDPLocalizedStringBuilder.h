@class NSString;

@interface CDPLocalizedStringBuilder : NSObject {
    NSString *_key;
    NSString *_table;
}

+ (id)builderForKey:(id)a0;
+ (id)builderForKey:(id)a0 inTable:(id)a1;

- (id)currentKey;
- (void).cxx_destruct;
- (id)localizedString;
- (id)addDeviceClass:(id)a0;
- (id)addSecretType:(unsigned long long)a0;
- (id)addUnqualifiedDeviceClass:(id)a0;

@end
