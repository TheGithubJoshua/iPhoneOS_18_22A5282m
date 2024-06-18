@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject

@property (nonatomic) long long day;
@property (readonly, nonatomic) NSMutableSet *events;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithDay:(long long)a0;

@end
