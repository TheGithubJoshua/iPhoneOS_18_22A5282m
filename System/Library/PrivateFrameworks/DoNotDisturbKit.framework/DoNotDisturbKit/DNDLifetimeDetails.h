@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *metadata;

+ (id)lifetimeDetailsForEvent:(id)a0 relativeToDate:(id)a1;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsForPlaceInference:(id)a0;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsUntilMorning;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 metadata:(id)a2;

@end
