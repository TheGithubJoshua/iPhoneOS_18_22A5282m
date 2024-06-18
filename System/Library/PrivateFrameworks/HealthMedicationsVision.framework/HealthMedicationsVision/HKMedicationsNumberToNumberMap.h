@class NSMutableDictionary;

@interface HKMedicationsNumberToNumberMap : NSObject {
    NSMutableDictionary *_storage;
}

- (id)init;
- (long long)integerForKey:(long long)a0;
- (void)setInteger:(long long)a0 forKey:(long long)a1;
- (void).cxx_destruct;

@end
