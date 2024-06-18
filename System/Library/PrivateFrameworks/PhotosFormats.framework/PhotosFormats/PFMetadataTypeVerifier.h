@class NSDictionary;

@interface PFMetadataTypeVerifier : NSObject {
    NSDictionary *_expectedImageDictionaryPropertyTypes;
    NSDictionary *_expectedImageArrayPropertyTypes;
    NSDictionary *_expectedAVMetadataIdentifierTypes;
    NSDictionary *_expectedAVMetadataKeyKeySpaceTypes;
}

- (id)init;
- (id)_expectedAVMetadataKeyKeySpaceTypes;
- (id)valueForKeyPath:(id)a0 fromProperties:(id)a1;
- (id)valueForKey:(id)a0 fromProperties:(id)a1;
- (id)_verifiedValue:(id)a0 forKey:(id)a1 expectedTypes:(id)a2;
- (id)_expectedAVMetadataIdentifierTypes;
- (id)valueForKey:(id)a0 keySpace:(id)a1 fromAVMetadataItems:(id)a2;
- (void).cxx_destruct;
- (id)valueForKeyPath:(id)a0 index:(unsigned long long)a1 fromProperties:(id)a2;
- (id)_coerceValue:(id)a0 toClass:(Class)a1 forKey:(id)a2;
- (id)valueForAVMetadataIdentifier:(id)a0 fromAVMetadataItems:(id)a1;
- (id)_expectedImageArrayPropertyTypes;
- (id)valueAtIndex:(unsigned long long)a0 forKey:(id)a1 fromArray:(id)a2;
- (id)_expectedImageDictionaryPropertyTypes;

@end
