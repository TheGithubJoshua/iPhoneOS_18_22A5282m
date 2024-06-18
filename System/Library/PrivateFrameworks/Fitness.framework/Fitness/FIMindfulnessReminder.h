@class NSDateComponents;

@interface FIMindfulnessReminder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateComponents *customDateComponents;
@property (readonly, nonatomic) unsigned long long customWeekdaySelection;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long type;

- (id)initWithCoder:(id)a0;
- (id)_typeDescription;
- (id)initWithType:(long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithType:(long long)a0 customDateComponents:(id)a1;
- (id)initWithType:(long long)a0 customDateComponents:(id)a1 customWeekdaySelection:(unsigned long long)a2 enabled:(BOOL)a3;

@end
