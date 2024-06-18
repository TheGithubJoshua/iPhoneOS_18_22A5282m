@class BRFieldCKInfo, NSData;

@interface BRCSideCarInfo : NSObject

@property (retain, nonatomic) BRFieldCKInfo *ckInfo;
@property (nonatomic) long long lastUsedTime;
@property (nonatomic) long long favoriteRank;
@property (retain, nonatomic) NSData *finderTags;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (BOOL)hasfieldsToSync;
- (id)descriptionWithContext:(id)a0;

@end
