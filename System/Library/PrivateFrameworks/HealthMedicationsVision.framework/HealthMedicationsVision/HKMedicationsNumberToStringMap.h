@class NSMutableDictionary;

@interface HKMedicationsNumberToStringMap : NSObject {
    NSMutableDictionary *_storage;
}

- (id)init;
- (id)stringForKey:(long long)a0;
- (void)setString:(id)a0 forKey:(long long)a1;
- (void).cxx_destruct;
- (long long)count;

@end
