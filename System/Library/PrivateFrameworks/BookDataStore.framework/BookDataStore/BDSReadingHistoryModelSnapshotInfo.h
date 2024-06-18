@class BDSReadingHistoryStreakInfo, BDSReadingHistoryDayInfo;

@interface BDSReadingHistoryModelSnapshotInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long loaded;
@property (nonatomic) long long lastSource;
@property (retain, nonatomic) BDSReadingHistoryDayInfo *modelReadingDay;
@property (retain, nonatomic) BDSReadingHistoryStreakInfo *modelLongestStreak;
@property (retain, nonatomic) BDSReadingHistoryDayInfo *remoteModelReadingDay;
@property (retain, nonatomic) BDSReadingHistoryStreakInfo *remoteModelLongestStreak;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLoaded:(long long)a0 lastSource:(long long)a1 modelReadingDay:(id)a2 modelLongestStreak:(id)a3 remoteModelReadingDay:(id)a4 remoteModelLongestStreak:(id)a5;

@end
