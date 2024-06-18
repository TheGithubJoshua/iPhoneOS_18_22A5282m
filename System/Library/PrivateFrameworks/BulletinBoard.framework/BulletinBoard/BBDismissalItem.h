@class NSDate;

@interface BBDismissalItem : NSObject

@property (readonly, nonatomic) unsigned long long feeds;
@property (readonly, nonatomic) NSDate *expiration;

- (BOOL)hasExpired;
- (void).cxx_destruct;
- (id)description;
- (void)addFeeds:(unsigned long long)a0;
- (id)initWithFeeds:(unsigned long long)a0;

@end
