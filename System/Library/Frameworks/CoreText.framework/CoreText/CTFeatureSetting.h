@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (unsigned long long)count;

@end
