@class NSArray;

@interface COTimerReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *timers;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, copy, nonatomic) NSArray *deletes;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimers:(id)a0;
- (id)initWithFilteredTimers:(id)a0;
- (id)initWithTimers:(id)a0 deletes:(id)a1;

@end
