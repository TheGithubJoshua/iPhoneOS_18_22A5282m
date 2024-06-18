@class BDSReadingHistoryStreakInfo, NSArray, BDSReadingHistoryDayInfo;

@interface BDSReadingHistoryStateInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long currentStreak;
@property (retain, nonatomic) BDSReadingHistoryStreakInfo *longestStreak;
@property (retain, nonatomic) BDSReadingHistoryDayInfo *today;
@property (retain, nonatomic) NSArray *readingHistory;
@property (readonly, nonatomic) BOOL isEmptyState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCurrentStreak:(long long)a0 longestStreak:(id)a1 today:(id)a2 readingHistory:(id)a3;

@end
