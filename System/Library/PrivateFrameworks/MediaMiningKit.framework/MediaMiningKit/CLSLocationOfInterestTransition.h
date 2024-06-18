@class NSUUID, NSDateInterval;

@interface CLSLocationOfInterestTransition : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDateInterval *transitionInterval;
@property (readonly, nonatomic) long long transportationMode;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 transitionInterval:(id)a1 transportationMode:(long long)a2;

@end
