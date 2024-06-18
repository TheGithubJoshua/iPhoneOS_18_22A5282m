@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long interval;
@property (readonly, nonatomic) long long frequency;
@property (readonly, nonatomic) unsigned long long weeklyRecurrenceDays;

- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInterval:(unsigned long long)a0 frequency:(long long)a1;
- (id)initWithInterval:(unsigned long long)a0 frequency:(long long)a1 weeklyRecurrenceDays:(unsigned long long)a2;

@end
