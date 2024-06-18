@class NSSet;

@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRemovedCanonicalIDs:(id)a0;

@end
