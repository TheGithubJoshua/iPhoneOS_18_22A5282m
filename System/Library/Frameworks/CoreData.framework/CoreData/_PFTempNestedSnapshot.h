@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (const id *)knownKeyValuesPointer;
- (unsigned int)_versionNumber;
- (id)valueForKey:(id)a0;
- (id)_snapshot_;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (void)dealloc;

@end
