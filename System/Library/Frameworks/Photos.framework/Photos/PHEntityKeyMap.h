@class NSDictionary;

@interface PHEntityKeyMap : NSObject {
    NSDictionary *_propertyKeysByEntityKey;
    NSDictionary *_entityKeysByPropertyKey;
}

+ (id)transposePropertyKeysByEntityKey:(id)a0;
+ (void)assertPropertyKey:(id)a0 doesNotExistForEntityKey:(id)a1 inEntityKeysByProperty:(id)a2;

- (id)initWithPropertyKeysByEntityKey:(id)a0;
- (void).cxx_destruct;
- (id)propertyKeyForEntityKey:(id)a0;
- (id)entityKeyForPropertyKey:(id)a0;

@end
