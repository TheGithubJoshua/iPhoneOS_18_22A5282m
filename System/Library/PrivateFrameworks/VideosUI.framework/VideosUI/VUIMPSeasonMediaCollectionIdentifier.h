@class NSNumber;

@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier

@property (copy, nonatomic) NSNumber *seasonNumber;

+ (id)requiredMPPropertyNames;
+ (id)seasonIdentifierWithMediaItem:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersistentID:(id)a0 mediaEntityType:(id)a1;
- (id)initWithPersistentID:(id)a0 seasonNumber:(id)a1;

@end
