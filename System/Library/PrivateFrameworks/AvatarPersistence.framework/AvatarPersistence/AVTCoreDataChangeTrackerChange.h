@class NSString;

@interface AVTCoreDataChangeTrackerChange : NSObject <AVTAvatarRecordChange>

@property (readonly, nonatomic) NSString *recordIdentifier;
@property (readonly, nonatomic) long long changeType;

+ (long long)trackerChangeTypeFromPersistentChangeType:(long long)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithRecordIdentifier:(id)a0 changeType:(long long)a1;

@end
