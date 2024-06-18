@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) NSArray *allDayOccurrences;
@property (readonly, nonatomic) NSArray *timedOccurrences;
@property (nonatomic) int generation;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOccurrences:(id)a0 timedOccurrences:(id)a1 allDayOccurrences:(id)a2 generation:(int)a3;
- (id)initWithOccurrences:(id)a0 timedOccurrences:(id)a1 allDayOccurrences:(id)a2;

@end
