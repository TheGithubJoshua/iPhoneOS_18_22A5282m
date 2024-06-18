@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *storeID;
@property (readonly, nonatomic) NSString *feedURL;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreID:(id)a0 feedURL:(id)a1;
- (BOOL)isEqualToPodcastIdentifierSet:(id)a0;

@end
