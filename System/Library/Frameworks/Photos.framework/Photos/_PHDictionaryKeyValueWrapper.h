@class NSSet, NSDictionary, NSMutableSet, NSManagedObjectID;

@interface _PHDictionaryKeyValueWrapper : NSObject {
    NSDictionary *_fetchedPropertyNamesByEntityName;
    NSMutableSet *_missingPropertyNames;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSSet *missingPropertyNames;

- (id)valueForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchedPropertyNamesByEntityName:(id)a0;
- (void)setObjectID:(id)a0 dictionary:(id)a1;

@end
