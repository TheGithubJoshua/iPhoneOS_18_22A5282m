@class NSDate;

@interface DurationGroup : NSObject

@property (readonly) unsigned long long groupId;
@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property BOOL wasChanged;

- (id)initWithStart:(id)a0 end:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
