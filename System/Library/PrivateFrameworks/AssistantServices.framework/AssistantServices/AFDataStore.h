@class NSMutableDictionary;

@interface AFDataStore : NSObject {
    NSMutableDictionary *_entries;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)imageDataForKey:(id)a0;
- (void)setImageData:(id)a0 forKey:(id)a1;

@end
