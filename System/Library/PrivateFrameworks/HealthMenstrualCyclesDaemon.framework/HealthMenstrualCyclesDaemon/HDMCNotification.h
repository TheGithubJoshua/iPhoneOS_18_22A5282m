@class NSString;

@interface HDMCNotification : NSObject <NSCopying>

@property (readonly, nonatomic) long long fireOnDayIndex;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) long long fertileWindowEndDayIndex;
@property (readonly, nonatomic) long long daysShifted;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)eventIdentifierFromUpdateFertileWindowNotification;
- (id)initWithFireOnDayIndex:(long long)a0 category:(id)a1;
- (id)initWithFireOnDayIndex:(long long)a0 category:(id)a1 fertileWindowEndDayIndex:(long long)a2 daysShifted:(long long)a3;

@end
