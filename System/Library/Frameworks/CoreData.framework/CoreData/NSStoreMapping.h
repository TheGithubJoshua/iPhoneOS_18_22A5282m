@class NSString;

@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)externalName;
- (unsigned long long)hash;
- (id)initWithExternalName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
