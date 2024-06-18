@class NSDate;

@interface FCCWeeklyGoalDisplayContext : NSObject

@property (readonly, nonatomic) unsigned long long displayCount;
@property (readonly, nonatomic) NSDate *lastDisplayDate;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDisplayCount:(long long)a0 lastDisplayDate:(id)a1;

@end
