@class NSDate;

@interface FCFeedCursor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long order;
@property (readonly, nonatomic) BOOL isTopOfFeed;
@property (readonly, nonatomic) BOOL isBottomOfFeed;
@property (readonly, copy, nonatomic) NSDate *date;

+ (id)cursorForCurrentDate;
+ (id)cursorForOrder:(unsigned long long)a0;
+ (id)cursorForBottomOfFeed;
+ (id)cursorForTimeIntervalBeforeNow:(double)a0;
+ (id)cursorForDate:(id)a0;
+ (id)cursorForTopOfFeed;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCursor:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compareToCursor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)bottommostCursor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)topmostCursor:(id)a0;
- (BOOL)hasReachedCursor:(id)a0;

@end
