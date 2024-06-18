@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (oneway void)release;
- (id)objectForKey:(id)a0;
- (id)initWithOwner:(id)a0;
- (id)retain;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)superRelease;

@end
