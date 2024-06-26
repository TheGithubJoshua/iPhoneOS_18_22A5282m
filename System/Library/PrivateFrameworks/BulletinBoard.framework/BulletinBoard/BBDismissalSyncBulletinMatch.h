@class NSString, BBDismissalItem;

@interface BBDismissalSyncBulletinMatch : NSObject

@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) BBDismissalItem *dismissalItem;
@property (copy, nonatomic) NSString *dismissalID;
@property (nonatomic) unsigned long long feeds;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDismissalDictionaryItem:(id)a0;
- (id)initWithDismissalID:(id)a0 andItem:(id)a1;

@end
