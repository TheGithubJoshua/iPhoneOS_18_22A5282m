@class NSUUID, NSDate, CWFAutoJoinParameters;

@interface CWFAutoJoinRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFAutoJoinParameters *parameters;
@property (nonatomic) BOOL allowAutoHotspotFallback;
@property (copy, nonatomic) NSDate *addedAt;
@property (copy, nonatomic) id /* block */ reply;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
